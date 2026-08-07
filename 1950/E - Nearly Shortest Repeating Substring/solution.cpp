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
 
bool check(int k, string s)
{
    if(s.size() % k != 0) return false;
 
    // int diff= 0;
    string match = s.substr(0, k);
    string match2 = s.substr(s.size()-k, k);
    int diff1 = 0;
    int diff2 = 0;
    for (int i = 0; i < s.size()/k; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if (s[i * k + j] != match[j])
            {
                diff1++;
            }
            
        }
        for (int j = 0; j < k; j++)
        {
            if (s[i * k + j] != match2[j])
            {
                diff2++;
            }
            
        }
    }
    
    return (diff1 <= 1) || (diff2 <= 1);
    
    
}
 
void solve_ronit(int tc)
{
    int n;
    cin >> n;
 
    string s;
    cin >> s;
 
    int ans = LLONG_MAX;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            // check for i
            if(check(i, s))ans = min(ans, i);
            if(check(n/i, s))ans = min(ans, n/i);
            
 
 
            // check for n / i
        }
        
    }
    cout << ans << endl;
    
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