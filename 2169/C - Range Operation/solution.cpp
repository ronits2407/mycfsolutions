#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
 
    int l = 1, r = 1;
    int max_increment = LONG_LONG_MIN;
    int curr_inrement;
    int curr_sum_upper = 0;
    int curr_sum_lower = 0;
    while (!(l == n + 1 || r == n + 1))
    {
        curr_sum_upper += a[r - 1];
        curr_sum_lower = (r - l + 1) * (r + l);
 
        curr_inrement = curr_sum_lower - curr_sum_upper;
        if (curr_inrement < 0 && l != r)
        {
            l = r;
            curr_sum_upper = 0;
 
            continue;
        }
        else if (curr_inrement < 0)
        {
            l++;
            r++;
            curr_sum_upper = 0;
            continue;
        }
        else
        {
            max_increment = max(max_increment, curr_inrement);
            if (r == n)
            {
                l++;
                continue;
            }
            
            r++;
        }
        
        
    }
 
 
    cout << sum + max_increment << endl; 
    
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