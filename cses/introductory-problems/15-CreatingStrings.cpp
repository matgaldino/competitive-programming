#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  string s;
  cin >> s;
  int total=0;
  vector<string> answer;
  sort(s.begin(), s.end());
  do{
    total++;
    answer.push_back(s);
  }while(next_permutation(s.begin(), s.end()));
  
  cout << total << "\n";
  for(auto i: answer){
    cout << i << "\n";
  }

  return 0;
}

/*
vector<string> answer;
vector<int> word(26, 0);
int total = 0;

void build(string s){
  if((int) s.length() == total){
    answer.push_back(s);
    return;
  }
  for(int i=0; i<26; i++){
    if(word[i]>0){
      word[i]--;
      build(s + char('a'+i));
      word[i]++;
    }
  }
  
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  
  char x;
  int num=1, den=1;
  
  while(cin >> x){
    word[x - 'a']++;
    total++;
    num *= total;
    den *= word[x - 'a'];
    //cout << "num = " << num << endl;
    //cout << "den = " << den << endl;
  }
  cout << num/den << "\n";
  
  build("");
  for(auto i: answer){
    cout << i << "\n";
  }

  return 0;
}
*/
