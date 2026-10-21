#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  
  vector<int> word(26, 0);
  char x;
  
  while(cin >> x){
    word[x - 'A']++;
  }
  
  string inicio, fim, middle;
  int flag = 0, cont = -1, soma = 0;
  for(int i=0; i<word.size(); i++){
    soma += word[i];
    if(word[i] == 0){continue;}
    else if(word[i]%2!=0 && cont == -1){cont=i;}  
    else if(word[i] % 2 != 0) {flag = 1; break;}
    else{
      for(int k=0; k<word[i]/2; k++){
        inicio += (i + 'A');
        fim += (i + 'A');
      }
    }
  }
  
  if(flag){
    cout << "NO SOLUTION\n";
  }else if(soma%2 == 0 && cont!=-1){
    cout << "NO SOLUTION\n";
  }else{
  reverse(fim.begin(), fim.end());
    if(cont!=-1){
      while(word[cont]--)
        middle += (cont + 'A');
      cout << inicio + middle + fim << "\n";
    }else{
      cout << inicio+fim << "\n";  
    }
  
  }

  return 0;
}
