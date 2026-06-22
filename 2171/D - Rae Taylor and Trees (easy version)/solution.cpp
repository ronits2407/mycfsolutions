#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int n;
    cin >> n;
 
    vector<int> a(n);
    vector<pair<int, int>> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    b[0].first = LONG_LONG_MAX;
    for (int i = 1; i < n; i++)
    {
        b[i].first = min(b[i - 1].first, a[i - 1]);
    }
 
    b[n - 1].second = a[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        b[i].second = max(b[i +1 ].second, a[i]);
    }
 
    for (int i = 1; i < n; i++)
    {
        if (b[i].first > b[i].second)
        {
            cout << "No" << endl;
            return; 
        }
        
    }
 
    cout << "Yes" << endl;
    
    
    
    
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