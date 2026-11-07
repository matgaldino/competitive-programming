#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  freopen("promote.in", "r", stdin);
  freopen("promote.out", "w", stdout);
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  vector<int> start(4);
  vector<int> end(4);
  vector<int> delta(4);
  int novos=0, BS=0, SG=0, GP=0;
  
  for(int i=0; i<4; i++){
    cin >> start[i];
    cin >> end[i];
    delta[i] = end[i] - start[i];
  }
  
  
  GP += delta[3];
  SG += delta[2] + delta[3];
  BS += delta[1] + delta[2] + delta[3];
  
  cout << BS << "\n";
  cout << SG << "\n";
  cout << GP << "\n";

  return 0;
}
