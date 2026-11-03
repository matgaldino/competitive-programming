#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int w;
  
  cin >> w;
  if(w == 2){
    cout << "NO\n";
    return 0;
  }
  if(w%2 == 1){
    cout << "NO\n";
  }else{
    cout << "YES\n";
  }

  return 0;
}
