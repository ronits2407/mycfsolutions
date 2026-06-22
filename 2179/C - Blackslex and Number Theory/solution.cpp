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
 
    auto it = min_element(a.begin(), a.end());
    int min_ = *it;
    *it = LONG_LONG_MAX;
    int min2 = *min_element(a.begin(), a.end());
 
    if (min2 - min_ > min_)
    {
        cout << min2 - min_ << endl;
        return;
    }
    
    cout << min_ << endl;
 
    
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