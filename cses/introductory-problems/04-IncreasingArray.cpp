#include<bits/stdc++.h>

//#define lli long long int

using namespace std;

using ll = long long;

int main(){
  /*
  lli n;
  cin >> n;
  vector<lli> vet;
  
  lli x;
  cin >> x;
  vet.push_back(x);
  lli soma = 0;
  
  for(lli i=1; i<n; i++){
    cin >> x;
    vet.push_back(x);
    lli sub = vet[i-1] - vet[i];
    if(sub > 0){
      soma = soma + sub;
      vet[i] += sub;
    }
  }
  
  cout << soma << "\n";
  */
  
  int n;
  cin >> n;
  
  ll cur, last, sum=0;
  cin >> last;
  
  for(int i=1; i<n; i++){
    cin >> cur;
    if(last - cur > 0){
      sum += last - cur;
      cur += last - cur;
    }
    last = cur;
  }
  
  cout << sum << "\n";

  return 0;
}
