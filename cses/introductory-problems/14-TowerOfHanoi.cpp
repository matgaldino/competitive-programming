#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve(int n, int from, int to){
  int OTHER = 6 - from - to;
  if(n == 0) return;
  solve(n-1, from, OTHER);
  cout << from << " " << to << "\n";
  solve(n-1, OTHER, to);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int n;
  cin >> n;
  
  cout << (1 << n) -1<< "\n";
  solve(n, 1, 3);

  return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int binpow(int base, int exp){
  int res = 1;
  while(exp>0){
    if(exp%2==1){
      res = res * base;
    }
    base = base * base;
    exp /= 2;
  }  
  return res;
}

const vector<int> caminho = {2, 3, 1, 3, 2, 1};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int n;
  cin >> n;
  int soma = 0;
  if(n%2!=0) soma = 3;
  vector<int> solution;
  int limite = binpow(2, n);
  for(int i=0; i<limite; i++){
    int g = i ^ (i >> 1);
    solution.push_back(g);
  }
  
  vector<int> controle(n, 1);
  
  cout << limite-1 << "\n";
  int track = 0;
  for(int i=1; i<solution.size(); i++){
    int aux = (solution[i-1]^solution[i]);
    int index=0;
    while(aux >>= 1) index++;
    if(index == 0){
      cout << controle[0] << " ";
      controle[0] = caminho[(track%3) + soma];
      track++;
      cout << controle[0] << "\n";
    }else{
      cout << controle[index] << " ";
      if(controle[index] == 1){
        if(controle[0] == 2){
          controle[index] = 3;
        }else{
          controle[index] = 2;
        }
      }else if(controle[index] == 2){
        if(controle[0] == 1){
          controle[index] = 3;
        }else{
          controle[index] = 1;
        }
      }else{
        if(controle[0] == 1){
          controle[index] = 2;
        }else{
          controle[index] = 1;
        }
      }
      cout << controle[index] << "\n";
    }
  }

  return 0;
}
*/
