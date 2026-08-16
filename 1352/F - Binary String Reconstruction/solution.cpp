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
    int a, b, c;cin >> a >> b >> c;
    string ans = "";
    if(a>0)ans+= '0';
    for (int i = 0; i < a; i++) ans+='0';
    if(a > 0 && b > 0){
        ans+='1';
        for (int i = 0; i < b-1; i++)
        {
            if(i%2==0)ans+='0';
            else ans+='1';
        }
        
    }
    else
    {
        if(b > 0){
            ans+='0';
            for (int i = 0; i < b; i++)
            {
                if(i%2==1)ans+='0';
                else ans+='1';
            }
        }
        
    }
    if(b == 0 && a == 0){
        ans += '1';
        for (int i = 0; i < c; i++)
        {
            ans += '1';
        }
        
    }
    else if(c > 0)
    {
        if(ans.back() == '0')
        {
            ans = ans.substr(0, ans.size()-1);
            for (int i = 0; i < c; i++)
            {
                ans += '1';
            }
            ans += '0';
        }
        else
        {
            
            for (int i = 0; i < c; i++)
            {
                ans += '1';
            }
        }
        
        
    }
    cout << ans << "
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