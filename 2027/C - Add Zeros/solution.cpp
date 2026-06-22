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
    int n;
    cin >> n;
 
    vi a(n+1);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i+1];
    }
    
 
    // vector<pair<int, pair<int, bool>>> b(n+1, {0, {0, false}});
    // vector<bool> possible(n+1, false);
    map<int, set<int>> b;
    map<int, bool> b_possible;
    for (int i = 1; i <= n; i++)
    {
        int curr = a[i];
 
        int sizerequired = a[i] + i -1;
        int furtherincrease = i - 1;
        
        
        b_possible[sizerequired] = ((sizerequired == n) ? true:false);
        b[sizerequired].insert(furtherincrease);
        
    }
    
    
 
    int ans = n;
    for (auto &&entry : b)
    {
        // debug(entry.first, )
        if (!b_possible[entry.first])
        {
            continue;
        }
        
        int largest = -INF;
       for (auto &&increases : entry.second)
       {
            b_possible[entry.first + increases] = true;
            // largest = max(largest, increases);
       }
    //    cout << *entry.second.rbegin() << endl;
       ans = max(ans, *entry.second.rbegin() + entry.first);
        
    }
    cout << ans << endl;
    
    
 
 
    
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