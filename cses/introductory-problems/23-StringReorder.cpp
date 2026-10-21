#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool is_possible(vector<int>& freq, char cur){
  char mode = cur;
  int spaces_left = 0;
  for(int j=0; j<26; j++){
    if(freq[j] > freq[mode - 'A']){
      mode = (char)j + 'A';
    }
    spaces_left += freq[j];
  }
  return(freq[mode - 'A'] <= (spaces_left +1)/2) && (freq[cur - 'A'] <= spaces_left / 2);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  string s;
  cin >> s;
  int n = (int)s.size();
  
  vector<int> freq(26);
  for(auto c: s){
    freq[c - 'A']++;
  }
  
  string ans = "";
  char last = '\0';
  
  for(int i=0; i<(int)s.size(); i++){
    for(int k=0; k<26; k++){
      char ch = k + 'A';
      if(freq[k] == 0 || ch == last) continue;
      freq[k]--; //use character
      if(is_possible(freq, ch)){
        ans.push_back(ch);
        last = ch;
        break;
      }else{
        freq[k]++; //put back
      }
    }
  }
  
  if((int)ans.size() == n){
    cout << ans << "\n";
  }else{
    cout << "-1" << "\n";
  }
  
  return 0;
}
