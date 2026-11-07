#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
  freopen("cowsignal.in", "r", stdin);
  freopen("cowsignal.out", "w", stdout);
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int row, col, K;
  
  cin >> row >> col >> K;
  
  vector<string> linhas(row);
  
  for(int i=0; i<row; i++){
    cin >> linhas[i];    
    for(int l=0; l<K; l++){
    string linha = "";
      for(int j=0; j<col; j++){
        for(int k=0; k<K; k++){
          linha += linhas[i][j];
        }
      }
      cout << linha << "\n";
    }    
  }
  
  
  

  return 0;
}
