#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  freopen("teleport.in", "r", stdin);
  freopen("teleport.out", "w", stdout);
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int start, end, t1, t2;
  
  cin >> start >> end >> t1 >> t2;
  
  int dist1, dist2, dist3;
  
  dist1 = abs(t1-start)+abs(t2-end);
  dist2 = abs(t2-start)+abs(t1-end);
  dist3 = abs(end-start);
  
  cout << min({dist1, dist2, dist3}) << "\n";
  
  return 0;
}
