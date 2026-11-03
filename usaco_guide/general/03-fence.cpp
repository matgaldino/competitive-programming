#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  freopen("paint.in", "r", stdin);
  freopen("paint.out", "w", stdout);
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int a, b, c, d;
  
  cin >> a >> b >> c >> d;
  
  if(c < a){
    if(d < a){
      cout << (d-c)+(b-a);
    }else if(d < b){
      cout << (b - c); 
    }else{
      cout << d-c;
    }
  }else if(c < b){
    if(d < b){
      cout << b-a;
    }else{
      cout << d-a;
    }
  }else{
    cout << (b-a)+(d-c);
  }
  cout << "\n";
  return 0;
}
