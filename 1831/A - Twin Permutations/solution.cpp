#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
  int n;
  cin >> n;
 
  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
 
  for (int i = 0; i < n; i++)
  {
    cout << n - a[i] + 1 << ' ';
  }
  cout << endl;
}
 
int32_t main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
 
  int t;
  cin >> t;
 
  while (t--)
  {
    solve();
  }
 
  return 0;
}