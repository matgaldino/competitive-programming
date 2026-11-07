#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  vector<ll> v(7);
  
  for(int i=0; i<(int)v.size(); i++){
    cin >> v[i];
  }
  
  sort(v.begin(), v.end());
  ll a, b, c;
  // worst case O(7!)
  do{
    a = v[0];
    b = v[1];
    c = v[2];
    
    if(v[3] == a+b && v[4] == b+c && v[5] == c+a){
      break;
    }  
  }while(next_permutation(v.begin(), v.end()));
  
  cout << a << " " << b << " " << c << "\n";

  return 0;
}
