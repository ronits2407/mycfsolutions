#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int n, q;
    cin >> n >> q;
 
    vector<int> candles(n);
    for (int i = 0; i < n; i++)
    {
        cin >> candles[i];
    }
 
    sort(candles.rbegin(), candles.rend());
 
    vector<int> prefix_sum(n);
    prefix_sum[0] = candles[0];
    for (int i = 1; i < n; i++)
    {
        prefix_sum[i] = prefix_sum[i - 1] + candles[i];
    }
    
 
    while (q--)
    {
 
        int x;
        cin >> x;
        x--;
 
        auto it = upper_bound(prefix_sum.begin(), prefix_sum.end(), x);
 
        if (it != prefix_sum.end())
        {
            cout << it - prefix_sum.begin() + 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
        
        
 
 
    }
    
    
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