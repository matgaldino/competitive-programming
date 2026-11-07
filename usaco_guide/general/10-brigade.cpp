#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  freopen("buckets.in", "r", stdin);
  freopen("buckets.out", "w", stdout);
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int b_row, b_col, l_row, l_col, r_row, r_col;
  
  for(int i=0; i<10; i++){
    for(int j=0; j<10; j++){
      char c;
      cin >> c;
      if(c == 'B'){
        b_row = i;
        b_col = j;
      }
      if(c == 'L'){
        l_row = i;
        l_col = j;
      }
      if(c == 'R'){
        r_row = i;
        r_col = j;
      }
    }
  }
  
  int resp=0;
  if((b_row == l_row && b_row == r_row) || (b_col == l_col && b_col == r_col)){
    //Find out if the rock is between the barn and the lake or not
    if(b_row == l_row){ //if its row
      if(r_col > min(b_col, l_col) && r_col < max(b_col, l_col)){
        resp = max(abs(b_row-l_row), abs(b_col-l_col)) + 1;
      }
    }else{ //if its col
      if(r_col > min(b_row, l_row) && r_row < max(b_row, l_row)){
        resp = max(abs(b_row-l_row), abs(b_col-l_col)) + 1;
      }
    }
  } 
  if(!resp){
    resp = abs(b_row - l_row) + abs(b_col - l_col) - 1;
  }
  
  cout << resp << "\n";

  return 0;
}
