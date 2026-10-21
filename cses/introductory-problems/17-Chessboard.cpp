#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int answer = 0;
vector<int> coluna(8, 0);
vector<int> diag1(15, 0);
vector<int> diag2(15, 0);
void solve(vector<string> tab, int row){
  if(row == 8){
    answer++;
    return;
  }
  for(int col=0; col<8; col++){
    if(tab[row][col] == '.'){
      if(coluna[col] == 0 && diag1[row-col + 7] == 0 && diag2[row+col] == 0){
        tab[row][col] = 'Q';
        coluna[col] = 1;
        diag1[row-col + 7] = 1;
        diag2[row+col] = 1;
        solve(tab, row+1);
        tab[row][col] = '.';
        coluna[col] = 0;
        diag1[row-col + 7] = 0;
        diag2[row+col] = 0;
      }
    }else{
      continue;
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  vector<string> tab;
  for(int i=0; i<8; i++){
    string linha;
    cin >> linha;
    tab.push_back(linha);
  }
  solve(tab, 0);
  
  cout << answer << "\n";

  return 0;
}
