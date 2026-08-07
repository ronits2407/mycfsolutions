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
    int n, k;
    cin >> n >> k;
 
    string intitial, target;
    cin >> intitial >> target;
 
    map<char, int> lastoccurance;
    vector<int> curr_pos(n);
    // int ans = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     // lastoccurance[intitial[i]] = i;
    //     auto it = lastoccurance.find(target[i]);
    //     if (intitial[i] != target[i] && (it == lastoccurance.end() || i - it->second > k))
    //     {
    //         cout << -1 << '
';
    //         return;
    //     }
    //     else if(intitial[i] != target[i])
    //     {
    //         ans = max(ans, i - it->second);
    //     }
    //     lastoccurance[intitial[i]] = i;
        
    // }
    int ans = 0;
    int bound = n - 1;
    bool possible = true;
 
    for (int i = n - 1; i >= 0; i--)
    {
        int j = min(i, bound);
 
        while (j >= 0 && i - j <= k && intitial[j] != target[i])
        {
            j--;
        }
 
        if (j < 0 || i - j > k || intitial[j] != target[i])
        {
            possible = false;
            break;
        }
 
        ans = max(ans, i - j);
        bound = j;
        curr_pos[i] = j;
    }
 
    if (!possible)
    {
        cout << -1 << '
';
        return;
    }
 
    // for (int i = n-1; i >= 0; i--)
    // {
    //     if (intitial[i] != target[i])
    //     {
    //         auto it = lastoccurance.find(target[i]);
    //         if (it == lastoccurance.end() || i - it->second > k || i - it->second < 0)
    //         {
    //             cout << -1 << "
";
    //             return;
    //         }
    //         else
    //         {
    //             ans = max(ans, i - it->second);
    //         }
            
            
    //     }
        
    // }
    // cout << "possible" << '
';
    // int count = 0;
    cout << ans << '
';
    // while (intitial != target)
    // {
    //     // count++;
    //     set<char> required;
    //     for (int i = n - 1; i >= 0; i--)
    //     {
    //         if (intitial[i] != target[i])
    //         {
    //             required.insert(target[i]);
    //         }
    //         if (i < n-1)
    //         {
    //             if (required.find(intitial[i]) != required.end())
    //             {
    //                 required.erase(intitial[i]);
    //                 intitial[i+1] = intitial[i];
    //             }
                
    //         }
            
            
    //     }
    //     cout << intitial << '
';
        
    // }
    for (int j = 0; j < ans; j++)
    {
        string next_str = intitial;
        for (int i = n - 1; i >= 0; i--)
        {
            if (curr_pos[i] < i)
            {
                curr_pos[i]++;                     
                next_str[curr_pos[i]] = target[i];
            }
        }
        intitial = next_str;
        cout << intitial << '
';
    }
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