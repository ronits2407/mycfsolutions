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
 
 
 
int32_t main()
{
    cout << fixed << setprecision(20);
    int n, k;
    cin >> n >> k;
 
    vi a(n);
    ask(a);
    vi b(n);
    ask(b);
 
    vi pref(n+1, 0);
    pref[0] = 0;
    int onessum = 0;
    for (int i = 0; i < n; i++)
    {
        if (b[i] == 1)
        {
            onessum+= a[i];
        }
        
        pref[i+1] = pref[i] + ((b[i] == 0) ? a[i]:0);
    }
    int bestidx = -1;
    int best = -INF;
    for (int i = 0; i < n; i++)
    {
        if (b[i] == 1)
        {
            continue;
        }
 
        int l = i;
        int r = min(i + k - 1, n -1);
 
        int val = pref[r + 1] - pref[l];
        if (val > best)
        {
            bestidx = i;
            best = val;
        }
        
        
    }
 
    debug(bestidx, best);
    if (bestidx == -1)
    {
        cout << onessum << endl;
        return 0;
    }
    
    cout << onessum + best << endl;
    
    
 
    return 0;
}