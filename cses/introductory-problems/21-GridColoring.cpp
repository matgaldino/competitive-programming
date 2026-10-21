#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int H, W;
  cin >> H >> W;
  
  vector<string> grid(W);
  
  for(string& row: grid){
    cin >> row;
  }
  
  for(int i=0; i<H; i++){
    for(int j=0; j<W; j++){
      int parity = (i+j)%2;
      if(parity == 0){
        if(grid[i][j] == 'A') grid[i][j] = 'C';
        else grid[i][j] = 'A';
      }else{
        if(grid[i][j] == 'B') grid[i][j] = 'D';
        else grid[i][j] = 'B';
      }
    }
    cout << grid[i] << "\n";
  }
  

  return 0;
}
