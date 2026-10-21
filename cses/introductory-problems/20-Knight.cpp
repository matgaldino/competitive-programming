#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int INF = 10e9 + 5;
vector<pair<int, int>> moves = {{-2, -1}, {-2, 1}, {-1, -2}, {-1, 2}, {2, -1}, {2, 1}, {1, 2}, {1, -2}};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  
  int n;
  cin >> n;
  
  vector<vector<int>> dist(n, vector<int>(n, INF));
  vector<pair<int, int>> q;
  q.emplace_back(0,0);
  dist[0][0] = 0;
  
  for(int i=0; i<(int)q.size(); i++){
    auto [row, col] = q[i];
    for(pair<int, int> move: moves){
      int r = row + move.first;
      int c = col + move.second;
      if(min(r, c)>=0 && max(r, c)<n && dist[r][c] == INF){
        dist[r][c] = dist[row][col] + 1;
        q.emplace_back(r, c);
      }
    }
  }
  
  for(int row=0; row<n; row++){
    for(int col=0; col<n; col++){
      cout << dist[row][col] << " ";
    }
    cout << "\n";
  }
  

  return 0;
}
