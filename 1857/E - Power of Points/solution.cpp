#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int, int>
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define vpii vector<pair<int, int>>
#define ask(v)                              \
    for (int i = 0; i < (int)v.size(); ++i) \
        cin >> v[i];
 
#define give(v)                             \
    for (int i = 0; i < (int)v.size(); ++i) \
        cout << v[i] << ' ';                \
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
#define debug(x...)               \
    cerr << "[" << #x << "] = ["; \
    _print(x);
#else
#define debug(x...)
#endif
 
void solve_ronit(int tc)
{
    debug(tc);
    int n;
    cin >> n;
 
    vi a(n);
    ask(a);
 
    vpii b(n);
    for (int i = 0; i < n; i++)
    {
        b[i].first = a[i];
        b[i].second = i;
    }
    
    sort(all(b));
    vi ans(n);
    int curr = n;
    for (int i = 1; i < n; i++)
    {
        int len = b[i].first - b[i-1].first;
        debug(len);
        curr += len * (n - i);
    }
    
    ans[b[0].second] = curr;
    debug(curr);
    for (int i = 1; i < n; i++)
    {
        // find ans for ans[b[i].second]
        debug(curr);
        curr -= (b[i].first - b[i-1].first) * (n - i);
        debug(curr);
        curr += (b[i].first - b[i-1].first) * i;
        debug(curr);
        ans[b[i].second] = curr;
 
    }
    give(ans);
    
}
 
int32_t main()
{
    cout << fixed << setprecision(20);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve_ronit(i);
    return 0;
}