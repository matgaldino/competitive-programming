#include<bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  
  //soma da 1 ate n = (1 + n)n/2
  long long int soma = 1LL * (1+n)*n/2;
  int j;
  for(int i=0; i<n-1; i++){
    cin >> j;
    soma = soma - j;
  }
  
  cout << soma << "\n";
  
  /*
  vector<int> vet(n+1, 0);
  int j;
  for(int i=0; i<n-1; i++){
    cin >> j;
    vet[j] = 1;
  }
  
  for(long unsigned int i=1; i<vet.size(); i++){
    if(vet[i] == 0){
      cout << i << "\n";
    }
  }
  */
  
  return 0;
}
