#include<bits/stdc++.h>

using namespace std;

using ll = long long;

int main(){
  ll n;
  cin >> n;
  
  ll possible, notPossible;
  for(ll k=1; k<=n; k++){
    possible = (k*k * (k*k - 1))/2;
    notPossible = (k-1)*(k-2)*4;
    cout << possible - notPossible << "\n";
  }

  return 0;
}
