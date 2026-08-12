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
 
int power(int base, int exp) {
    int res = 1;
    while (exp) {
        if (exp % 2) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}
 
int nCr(int n, int r) {
    if (r < 0 || r > n) return 0;
    if (r > n - r) r = n - r;
    
    int num = 1, den = 1;
    for (int i = 0; i < r; i++) {
        num = (num * (n - i)) % MOD;
        den = (den * (i + 1)) % MOD;
    }
    
    return (num * power(den, MOD - 2)) % MOD;
}
 
void solve_ronit()
{
    int n;
    cin >> n;
    vpii a(n-1);
    map<int, vi> graph;
    for(int i = 0; i < n -1 ; i++)
    {
        int u, v;
        cin >> u >> v;
        u--;v--;
        a[i] = {u, v};
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
 
    bool treedegree = false;
    int degreeidx = -1;
    vi ans(n-1, -1);
    for (auto &&v : graph)
    {
        if (v.second.size() >= 3)
        {
            degreeidx = v.first;
            treedegree = true;
            break;
        }
        
    }
    if(!treedegree)
    {
        for(int i=0; i< n-1; i++)cout << i << "
";
        return; 
    }
    int count = 0;
    for (int i = 0; i < n-1; i++)
    {
        if (a[i].first == degreeidx || a[i].second == degreeidx)
        {
            ans[i] = count++;
        }
        
    }
    for (int i = 0; i < n-1; i++)
    {
        if(ans[i] == -1)ans[i] = count++;
    }
    for (int i = 0; i < n-1; i++)
    {
        cout << ans[i] << "
";
    }
    
    
    
    
}
 
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(20);
    solve_ronit();
    return 0;
}