#include<bits/stdc++.h>

using namespace std;

using ll = long long;

int main(){
  ll n;
  cin >> n;
  
  ll soma = ((1+n)*n)/2;
  if(soma%2==1){
    cout << "NO\n";
  }else{
    cout << "YES\n";
    ll cont1 = 0, cont2 = 0;
    ll aux1, aux2;
    aux1 = aux2 = soma/2;
    vector<ll> vet1, vet2;
    for(ll i=n; i>0; i--){
      if(aux1>aux2){
        aux1 -= i;
        vet1.push_back(i);
        cont1++;
      }else{
        aux2 -= i;
        vet2.push_back(i);
        cont2++;
      }
    }
    cout << cont1 << "\n";
    for(ll i: vet1){
      cout << i << " ";
    }
    cout << "\n";
    cout << cont2 << "\n";
    for(ll i: vet2){
      cout << i << " ";
    }
    cout << "\n";
  }


  return 0;
}
