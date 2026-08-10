#include <bits/stdc++.h>
 
// PBDS headers
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace std;
using namespace __gnu_pbds;
 
// PBDS indexed_set definition
typedef tree<
    int, 
    null_type, 
    less<int>, 
    rb_tree_tag, 
    tree_order_statistics_node_update> 
    indexed_set;
 
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
 
void solve_ronit(int tc)
{
    int n;
    cin >> n;
    vi a(n);
    ask(a, n);
    vpii weightarr(n, {0, 0});
    for (int i = 0; i < n-1; i++)
    {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        weightarr[u].second++;
        weightarr[v].second++;
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        weightarr[i].first = a[i];
    }
    sort(all(weightarr), [&](auto& a, auto& b){
        if (a.first == b.first)
        {
            return a.second < b.second;
        }
        return a.first > b.first;        
    });
    int l = 0;
    cout << sum << " ";
    int prev = sum;
    for (int i = 2; i <= n-1; i++)
    {
        int currans = prev;
        while (l < n && weightarr[l].second <= 1)
        {
            l++;
        }
        if (l < n)
        {
            currans = prev + weightarr[l].first;
        }
        cout << currans << " ";
        prev = currans;
        weightarr[l].second--;
    }
    cout << "
"; 
}
 
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(20);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve_ronit(i);
    return 0;
}