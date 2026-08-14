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
const double PI = 3.1415926535897932384626433832795;
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
 
void solve_ronit(int tc)
{
    int n, k;cin >> n >> k;vi a(n);ask(a, n);
    map<int, vi> mp;
    for (int i = 0; i < n; i++)
    {
        mp[a[i]%k].push_back(a[i]);
    }
    int oddcount = 0;
    for (auto &&entry : mp)
    {
        if (entry.second.size() % 2 == 1)
        {
            oddcount++;
        }
        
    }
    if ((n % 2 == 0 && oddcount > 0) || (n % 2 == 1 && oddcount > 1 ))
    {
        cout << -1 << "
";return;
    }
    int operations = 0;
    for (auto &&entry : mp)
    {
        sort(all(entry.second));
        int sz = entry.second.size();
        if (sz % 2 == 0)
        {
            for (int i = 0; i < sz; i += 2)
            {
                operations += (entry.second[i+1] - entry.second[i]) / k;
            }
        }
        else
        {
            vi pref(sz/2 + 1, 0);
            for (int i = 0; i < sz/2; i++)
            {
                pref[i+1] = pref[i] + (entry.second[2*i+1] - entry.second[2*i]) / k;
            }
            vi suf(sz/2 + 1, 0);
            for (int i = 0; i < sz/2; i++)
            {
                suf[i+1] = suf[i] + (entry.second[sz-1-2*i] - entry.second[sz-2-2*i]) / k;
            }
            int best = LLONG_MAX;
            for (int j = 0; j < sz; j += 2)
            {
                best = min(best, pref[j/2] + suf[(sz-1-j)/2]);
            }
            operations += best;
        }
    }
    cout << operations << "
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