#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int n, k, x, sum = 0;
    cin >> n >> k >> x;
 
    vector<int> a(n);
 
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
 
    int positions = 0;
 
    positions += n * ((x - 1) / sum);
 
    int curr_sum = ((x - 1) / sum) * sum;
 
    for (int i = 0; i < n; i++)
    {
        curr_sum += a[n - i - 1];
        if (curr_sum >= x)
        {
            cout << max(n * k - positions - i, 0LL) << endl;
            return;
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