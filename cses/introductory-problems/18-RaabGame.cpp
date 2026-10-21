#include <bits/stdc++.h>
using namespace std;

using ll = long long;


void solve_case(){
  int n, a, b;
  cin >> n >> a >> b;
  vector<int> j1, j2;
  vector<int> cartas1, cartas2;
  for(int k=1; k<=n; k++){
    cartas1.push_back(k);
    cartas2.push_back(k);
  }
  int soma = a+b, empates = n - soma;
  if(empates < 0 || (a == 0 && b != 0) || (b == 0 && a != 0)){
    cout << "NO\n";
    return;
  }
  
  if(max(a, b) > n-1){
    cout << "NO\n";
    return;
  }
  
  for(int k=0; k<empates; k++){
    j1.push_back(n);
    j2.push_back(n);
    cartas1.pop_back();
    cartas2.pop_back();
    n--;   
  }
  
  if(a>b){
    for(int k=0; k<n; k++){
      j2.push_back(cartas2[k]);
      if(k>=b){
        j1.push_back(cartas1[k]);
      }
    }
    for(int k=0; k<b; k++){
      j1.push_back(cartas1[k]);
    }
  }else{
    for(int k=0; k<n; k++){
      j1.push_back(cartas1[k]);
      if(k>=a){
        j2.push_back(cartas2[k]);
      }
    }
    for(int k=0; k<a; k++){
      j2.push_back(cartas2[k]);
    }
  }
  
  cout << "YES\n";
  for(auto& k: j1){
    cout << k << " ";
  }
  cout << "\n";
  for(auto& k: j2){
    cout << k << " ";
  }
  cout << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  for(int i=0; i<t; i++){
    solve_case();
  }
  return 0;
}
