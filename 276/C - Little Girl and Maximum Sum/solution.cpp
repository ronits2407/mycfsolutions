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
    
    int n, q;
    cin >> n >> q;
    
    vi a(n);
    ask(a, n);
 
    vi diff(n+1, 0);
    while (q--)
    {
        int l, r;
 
        cin >> l >> r;
        l--;
        r--;
        diff[l]++;
        diff[r+1]--;
    }
 
    for (int i = 0; i < n; i++)
    {
        diff[i+1] += diff[i];
    }
    
 
    sort(all(diff));
    sort(all(a));
    int ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        ans += a[i] * diff[i+1];
    }
    cout << ans << endl;
    
    
 
    return 0;
}