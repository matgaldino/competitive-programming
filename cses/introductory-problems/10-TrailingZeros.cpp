#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
  ll n;
  cin >> n;
  ll res = 0;
  
  for(ll i=5; i<=n; i*=5){
    res += n/i;
  }
  
  cout << res << "\n";
  
  return 0;
}

/*
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

int main(){
  ll n;
  cin >> n;
  vector<ll> vet;
  
  ll res = 0;
  ll i = 1;
  while(true){
    vet.push_back(binpow(5, i));
    if(vet[i-1]>n) break;
    i++;
  }
  
  
  for(ll k=0; k<i; k++){
    res+= n/vet[k];
  }
  
  cout << res << "\n";
  
  return 0;
}
*/
