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
 
void solve_ronit()
{
    int n;
    cin >> n;
    vi a(n);
    ask(a, n);
    vi modcount(3, 0);
    for(int i = 0; i < n; i++)modcount[a[i]%3]++;
    if (modcount[0] <= n/2)
    {
        cout << 0 << endl;
        int temp = 0;
        string ans = "";
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 3 == 0)
            {
                ans += '0';
                temp++;
            }
            else
            {
                ans += '1';
            } 
        }
        for (int i = 0; i < n && temp != n/2; i++)
        {
            if (ans[i] == '1')
            {
                ans[i] = '0';
                temp++;
            }
        }
        cout << ans;
        return;
    }
    
    if(modcount[1] == 0 && modcount[2] == 0)
    {
        cout << 1 << endl;
        for (int i = 0; i < n/2; i++)
        {
            cout << '0';
            cout << '1';
        }
        return;
    }
    if (modcount[1] + modcount[2] <= n/2)
    {
        cout << 2 << endl;
        int temp = 0;
        string ans = "";
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 3 >= 1)
            {
                ans += '0';
                temp++;
            }
            else
            {
                ans += '1';
            } 
        }
        for (int i = 0; i < n && temp != n/2; i++)
        {
            if (ans[i] == '1')
            {
                ans[i] = '0';
                temp++;
            }
        }
        cout << ans;
        return;
 
    }
    cout << -1;
    
}
 
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(20);
    solve_ronit();
    return 0;
}