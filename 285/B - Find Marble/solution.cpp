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
    
    int n, s, t;
    cin >> n >> s >> t;
    
    vi a(n);
    ask(a);
    
    
    vi reverse_permutation(n + 1);
    for (int i = 0; i < n; i++)
    {
        reverse_permutation[a[i]] = i + 1;
        // debug("hi");
    }
 
    int ans = -1;
    int curr = t;
    int count = 0;
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (curr == s)
        {
            found = true;
            break;
        }
 
        curr = reverse_permutation[curr];
        count++;
        
    }
    if (curr == s)
    {
        found = true;
    }
    
    if (found)
    {
        cout << count << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    
    
    return 0;
}