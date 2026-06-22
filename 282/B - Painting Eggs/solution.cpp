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
 
#define pref(v, p)                          \
    p[0] = v[0];                            \
    for (int i = 1; i < (int)v.size(); ++i) \
        p[i] = p[i - 1] + v[i];
 
#define suff(v, s)                               \
    s[(int)v.size() - 1] = v.back();             \
    for (int i = (int)v.size() - 2; i >= 0; --i) \
        s[i] = s[i + 1] + v[i];
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
 
 
 
int32_t main()
{
    cout << fixed << setprecision(20);
    
    int n;
    cin >> n;
 
    vpii a(n);
    int A = 0;
    int G = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
        A += a[i].first;
 
    }
 
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        if (abs(A - G) <= 500)
        {
            break;
        }
        else
        {
            // assume A > G
            A -= a[i].first;
            G += a[i].second;
            ans += "G";
        }
        
 
        
    }
    while (ans.size() != n)
    {
        ans += "A";
    }
    
    cout << ans << endl;
    
 
    
    return 0;
}