#include <bits/stdc++.h>
using namespace std;

using ll = long long;
constexpr int N = 7;
int total = 0;
//vector<vector<bool>> visited(N, vector<bool>(N));
// first optimization:
bool visited[N][N]{};
const vector<pair<int, int>> dirs{{1,0}, {0,-1}, {-1, 0}, {0, 1}};
string path;

bool isInside(int row, int col){
  return (row < N) && (row >= 0) && (col < N) && (col >= 0); 
}

bool isBlocked(int row, int col){
  return !isInside(row, col) || visited[row][col];
}


void dfs(int row, int col, int steps){
  //third optmization: if visited [N-1][0] before (N*N-1) steps
  if(visited[N-1][0] == 1 && steps != 48){
    return;
  }
  
  if(visited[row][col] == 1){
    return;
  }  
  // second optimization: if created a division
  // Up and Down blocked, Left and Right free
  if(isBlocked(row-1, col) && isBlocked(row+1, col) && !isBlocked(row, col-1) && !isBlocked(row, col+1)){
    return;
  }
  // Left and Right blocked, Up and Down free
  if(!isBlocked(row-1, col) && !isBlocked(row+1, col) && isBlocked(row, col-1) && isBlocked(row, col+1)){
    return;
  }
  
  visited[row][col] = 1;
  
  
  if(path[steps] == '?'){
    for(auto& dir: dirs){
      int r = dir.first;
      int c = dir.second;
      if(isInside(row+r, col+c)){
        dfs(row+r, col+c, steps+1);
      }
    }
  }else if(path[steps] == 'U'){
    if(isInside(row-1, col)){
      dfs(row-1, col, steps+1);
    }
  }else if(path[steps] == 'R'){
    if(isInside(row, col+1)){
      dfs(row, col+1, steps+1);
    }
  }else if(path[steps] == 'D'){
    if(isInside(row+1, col)){
      dfs(row+1, col, steps+1);
    }
  }else if(path[steps] == 'L'){
    if(isInside(row, col-1)){
      dfs(row, col-1, steps+1);
    }
  }
  
  if(row == N-1 && col == 0 && steps == N*N - 1){
    total++;
  }
  visited[row][col] = 0;  
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  cin >> path;
  
  dfs(0, 0, 0);
  
  cout << total << "\n";

  return 0;
}
