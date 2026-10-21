#include<bits/stdc++.h>

using namespace std;

int main(){
  /*
  string dna;
  cin >> dna;
  
  long unsigned int i = 0;
  int cont = 0;
  int adc = 1;
  int max = 0;
  
  while(dna[i]!='\0'){
    if(dna[i] == dna[i+adc]){
      adc++;
    }else{
      cont = adc;
      i = i+adc;
      if(cont > max) max = cont;
      cont = 0;
      adc = 1;
    }
    
    
    if(i+adc > dna.size()) break;
  }
  
  cout << max << "\n";
  */
  
  string dna;
  cin >> dna;
  int n = dna.size();
  
  int atual=1;
  int maior=1;
  for(int i=1; i<n; i++){
    if(dna[i] == dna[i-1]){
      atual++;
    }else{
      atual = 1;
    }
    maior = max(maior, atual);
  }
  
  cout << maior << "\0";
  
  return 0;
}
