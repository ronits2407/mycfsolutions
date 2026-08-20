#include <bits/stdc++.h>
 
// PBDS headers
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace std;
using namespace __gnu_pbds;
#define pii pair<int, int>
#define int long long
 
// PBDS indexed_set definition
typedef tree<
    pii, 
    null_type, 
    less<pii>, 
    rb_tree_tag, 
    tree_order_statistics_node_update> 
    indexed_set;
 
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
    int n, c;cin >> n >> c;vi a(n);ask(a,n);
    a[0] += c;
    vi pref(n+1, -1);
    vi pref2(n+1, 0);
    for (int i = 0; i < n; i++)
    {
        pref[i+1]=max(pref[i],a[i]);
        pref2[i+1]=pref2[i]+a[i];
    }
    indexed_set s;
    vi ans;
    for (int i = n - 1; i > 0; i--)
    {
        int ele = s.size() - s.order_of_key({a[i]+1, -1});
        debug(tc, ele, i, pref[i]);
        if(!ele && pref[i] < a[i]){
            ans.push_back(0);
            s.insert({a[i], i});
            continue;
        }
        int finalsize = pref2[i+1];
        int ele2 = s.size() - s.order_of_key({finalsize+1, -1});
        ans.push_back(i + (ele2 > 0 ? 1 : 0));
        s.insert({a[i], i});
    }
    int count = 0;
    while (!s.empty() && s.rbegin()->first > a[0])
    {
        count++;
        a[0] += s.rbegin()->first;
        s.erase(*s.rbegin());
    }
    ans.push_back(count);
    
    
    reverse(all(ans));give(ans, n);
    
    
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