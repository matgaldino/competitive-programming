#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int counter = 0;

void solve_case(){
  int a, b, c;
  
  cin >> a >> b >> c;
  
  if(a+b+c > 1){
    counter++;
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int n;
  
  cin >> n;
  
  for(int i=0; i<n; i++){
    solve_case();    
  }
  
  cout << counter << "\n";

  return 0;
}
