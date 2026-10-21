#include<bits/stdc++.h>

using namespace std;

using ll = long long;

int main(){
  int t;
  cin >> t;
  
  for(int i=0; i<t; i++){
    int y, x;
    cin >> y >> x;
    int k = max(y, x);
    bool par;
    if(k%2==0){
      par = true;
    }else{
      par = false;
    }
    
    ll k2 = 1LL * k * k;
    int x0, y0;
    if(par){
      y0 = k;
      x0 = 1;
    }else{
      x0 = k;
      y0 = 1;
    }
    
    ll delta = 1LL * abs(x0-x) + abs(y0-y);
    ll res = k2 - delta;
    cout << res << "\n";
  }
  

  return 0;
}
