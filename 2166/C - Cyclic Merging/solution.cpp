#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int n;
    cin >> n;
 
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].second;
    }
 
    for (int i = 0; i < n - 1; i++)
    {
        a[i].first = max(a[i].second, a[i + 1].second);
    }
    a[n - 1].first = max(a[n - 1].second ,a[0].second);
    
 
    sort(a.begin(), a.end());
    int minimum = 0;
 
    for (int i = 0; i < n - 1; i++)
    {
        minimum += a[i].first;
    }
 
    cout << minimum << endl;
    
    
}
 
int32_t main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--)
    {
        solve();
    }
 
    return 0;
}