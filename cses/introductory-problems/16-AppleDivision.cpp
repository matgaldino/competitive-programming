#include <bits/stdc++.h>
using namespace std;

using ll = long long;

vector<ll> pesos;

ll sum1(ll g, ll n){
  ll sum = 0;
  for(ll k=n-1; k>=0; k--){
    if(((g >> k) & 1LL)){
      sum += pesos[k];
    }
  }
  return sum;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  ll n;
  cin >> n;

  ll total = 0;
  for(ll i=0; i<n; i++){
    ll peso;
    cin >> peso;
    pesos.push_back(peso);
    total += peso;
  }
  
  ll answer = LLONG_MAX;
  
  //number of subsets possible = 2^n
  for(ll i=0; i<(1LL << n); i++){
    ll sumConj1 = sum1(i, n);
    ll sumConj2 = total - sumConj1;
    
    answer = min(answer, abs(sumConj1 - sumConj2));
  }
  
  cout << answer << "\n";

  return 0;
}
