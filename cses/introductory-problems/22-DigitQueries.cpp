#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void test_case(){
  ll k;
  cin >> k;
  
  ll quantidade = 9; //number quantity of length = len
  ll len = 1;
  ll skipped = 0;
  while(true){
    if(k > quantidade*len){
      k -= quantidade*len; //digits
      skipped += quantidade; //numbers
      quantidade = quantidade * 10;
    }else{
      ll skip = (k-1)/len; //how many number we must skip
      skipped += skip;
      k -= skip*len; //k = 1...len;
      ll answer = skipped + 1;
      cout << to_string(answer)[k-1] << "\n";
      break;
    } 
    len++;
  }
  return;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int q;
  cin >> q;
  
  for(int i=0; i<q; i++){
    test_case();
  }

  return 0;
}
