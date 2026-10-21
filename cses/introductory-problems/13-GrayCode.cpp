/*
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll binpow(ll base, ll exp){
  ll res = 1;
  while(exp>0){
    if(exp%2==1){
      res = res * base;
    }
    base = base * base;
    exp /= 2;
  }  
  return res;
}

void print_bin(ll g, ll n){
  for(ll k=n-1; k>=0; k--){
    cout << ((g >> k) & 1LL);
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  ll g, n, limite;
  cin >> n;
  
  limite = binpow(2, n);
  
  for(ll i=0; i<limite; i++){
    g = i ^ (i >> 1LL);
    print_bin(g, n);
    cout << "\n";
  }

  return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

vector<string> gray(int n){
  if(n == 1){
    return {"0", "1"};
  }
  vector<string> code;
  auto prev = gray(n-1);
  for(auto s: prev){
    code.push_back("0" + s);
  }
  reverse(prev.begin(), prev.end());
  for(auto s: prev){
    code.push_back("1" + s);
  }
  return code;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int n;
  cin >> n;
  
  auto code = gray(n);
  for(auto s: code){
    cout << s << "\n";
  }
  
  return 0;
}
