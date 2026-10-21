/*
#include<bits/stdc++.h>

using namespace std;

using ll = long long;

constexpr ll MOD = 1'000'000'007;

int main(){
  int n;
  cin >> n;
  ll res = 1;
  for(int i=0; i<n; i++){
    res = (res * 2) % MOD;
  }
  
  cout << res << "\n";

  return 0;
}
*/

#include<bits/stdc++.h>

using namespace std;

using ll = long long;

constexpr ll MOD = 1000000007;

ll binpow(ll base, ll exp){
  ll res = 1;
  while(exp>0){
    if(exp%2==1){
      res = res * base % MOD;
    }
    base = base * base % MOD;
    exp /= 2;
  }  
  return res;
}

int main(){
  ll n;
  cin >> n;
  
  cout << binpow(2, n) << "\n";
  
  return 0;
}
