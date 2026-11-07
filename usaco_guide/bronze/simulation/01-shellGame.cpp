#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
  freopen("shell.in", "r", stdin);
  freopen("shell.out", "w", stdout);
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int n;
  cin >> n;
  
  vector<int> a(n), b(n), guess(n);
  
  for(int i=0; i<n; i++){
    cin >> a[i] >> b[i] >> guess[i];
  }
  
  
  int count = 0, maximo = 0;
  for(int i=0; i<3; i++){
    array<int, 3> game{};
    game[i] = 1;
    count = 0;
    for(int rodada=0; rodada<n; rodada++){
      swap(game[a[rodada]-1], game[b[rodada]-1]);
      if(game[guess[rodada]-1]) count++;  
    }
    maximo = max(maximo, count);
    
  }
  
  cout << maximo << "\n";  

  return 0;
}
