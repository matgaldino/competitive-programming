#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  
  int n;
  
  cin >> n;
  
  vector<vector<int>> grid(n, vector<int>(n, -1));
  
  for(int i=0; i<n; i++){
    grid[0][i] = i;
    grid[i][0] = i;
    grid[i][i] = 0;
  }
  
  for(int row=1; row<n; row++){
    for(int col=row; col<n; col++){
      if(grid[row][col] != -1) continue;
      set<int> vistos;
      for(int c=0; c<col; c++){
        vistos.insert(grid[row][c]);
      }
      for(int r=0; r<row; r++){
        vistos.insert(grid[r][col]);
      }
      int x=0;
      while(vistos.count(x)) x++;
      grid[row][col] = x;
      grid[col][row] = x;
    }
  }
  
  for(int row=0; row<n; row++){
    for(int col=0; col<n; col++){
    cout << grid[row][col] << " ";
    }
    cout << "\n";
  }
  
  return 0;
}
