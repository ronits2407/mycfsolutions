#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int, int>
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define vpii vector<pair<int, int>>
#define ask(v, n) \
    for (int i = 0; i < (n); ++i) \
        cin >> v[i];
 
#define give(v, n) \
    for (int i = 0; i < (n); ++i) \
        cout << v[i] << ' '; \
    cout << '
';
 
const int MOD = 1e9 + 7;
const int INF = 1e18;
void _print() { cerr << "]
"; }
template <typename T, typename... Args>
void _print(T t, Args... args)
{
    cerr << t << (sizeof...(args) ? ", " : "");
    _print(args...);
}
#ifndef ONLINE_JUDGE
#define debug(x...) \
    cerr << "[" << #x << "] = ["; \
    _print(x);
#else
#define debug(x...)
#endif
 
 
 
int32_t main()
{
    cout << fixed << setprecision(20);
    
    int n, k, q;
    cin >> n >> k >> q;
 
    vi diff(2e5+1, 0);
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        // cout << "HI" << endl;
        l--;
        r--;
        diff[l]++;
        diff[r+1]--;
 
    }
    for (int i = 0; i < 2e5; i++)
    {
        diff[i+1] += diff[i];
    }
 
    vi ans(2e5+1);
    for (int i = 0; i < 2e5; i++)
    {
        ans[i+1] = ans[i] + ((diff[i] >= k) ? 1:0);
    }
 
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        cout << ans[b] - ans[a-1] << endl;
    }
    
    
    
    
    return 0;
}