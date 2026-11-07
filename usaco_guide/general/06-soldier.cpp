#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  ll k, n, w;
  
  cin >> k >> n >> w;
  
  ll soma = ((k + w*k)*w)/2;
  
  if(soma-n > 0){
    cout << soma-n << "\n";
  }else{
    cout << "0\n";
  } 

  return 0;
}
