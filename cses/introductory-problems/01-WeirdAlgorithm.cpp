#include<bits/stdc++.h>

using namespace std;

int main(){
  long long int n;
  
  cin >> n;
  
  while(n!=1){
    cout << n << " ";
    if(n%2 == 0){
      n /= 2;
    }else if(n%2 == 1 && n!=1){
      n = n*3 + 1;
    }
  }
  
  cout << "1\n"; 

  return 0;
}
