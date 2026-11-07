#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  freopen("word.in", "r", stdin);
  freopen("word.out", "w", stdout);
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int n, limit;
  
  cin >> n >> limit;
  string word;
    
  cin >> word;
  cout << word;
  int atual = 0;
  atual += (int)word.length();
  for(int i=1; i<n; i++){
    cin >> word;
    
    atual += (int)word.length();
    
    if(atual<=limit){
      cout << " " << word;
    }else{
      atual = (int)word.length();
      cout << "\n";
      cout << word;
    }
  }

  return 0;
}
