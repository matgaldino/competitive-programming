#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int capacity[3];
int milk[3];

void pour(int origem, int destino){
  int left = capacity[destino] - milk[destino];
  if(left >= milk[origem]){
    milk[destino] += milk[origem];
    milk[origem] = 0;    
  }else{
    milk[origem] -= left;
    milk[destino] = capacity[destino];
  }  
}

int main(){
  freopen("mixmilk.in", "r", stdin);
  freopen("mixmilk.out", "w", stdout);
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  for(int i=0; i<3; i++){
    cin >> capacity[i] >> milk[i];
  }
  
  for(int i=0; i<100; i++){    
    pour(i%3, (i%3 + 1)%3);
  }
  
  for(int i=0; i<3; i++){
    cout << milk[i] << "\n";
  }

  return 0;
}
