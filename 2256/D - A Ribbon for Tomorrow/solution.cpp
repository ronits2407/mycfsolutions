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
 
const int MOD = 998244353;
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
 
 
void solve_ronit(int tc)
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int blockcount_one = 0, blockcount_zero = 0, ones = 0, zero = 0;;
    ones = count(all(s), '1');
    zero = count(all(s), '0');
    if(s[0] == '0')blockcount_zero++;
    else blockcount_one++;
    for (int i = 0; i < n-1; i++)
    {
        if (s[i] == '0' && s[i+1] == '1')
        {
            blockcount_one++;
        }
        else if (s[i] == '1' && s[i+1] == '0')
        {
            blockcount_zero++;
        }
    }
    if (!blockcount_one || !blockcount_zero)
    {
        cout << 1 << "
";
        return;
    }
    debug(blockcount_one, blockcount_zero, ones, zero);
    cout << (nCr(ones-1, blockcount_one-1) * nCr(zero-1, blockcount_zero-1) ) % MOD << "
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