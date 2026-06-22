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
    p[0] = abs(v[0]);                            \
    for (int i = 1; i < (int)v.size(); ++i) \
        p[i] = p[i - 1] + abs(v[i]);
 
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
 
void solve_ronit(int tc)
{
    int n;
    cin >> n;
 
    vi a(n);
    ask(a);
 
    vi p(n);
    vi s(n);
    
    pref(a, p);
    suff(a, s);
 
    pii best = {s[0], -1};
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            continue;
        }
        
        
        int sum = 0;
        if (i > 0)
        {
            sum += p[i-1];
        }
        sum -= a[i];
        if (i < n - 1)
        {
            sum += s[i+1];
        }
 
        if (sum > best.first)
        {
            best.first = sum;
            best.second = i;
        }
        
        
        
        
    }
 
    if (best.second == -1)
    {
        cout << 0 << endl;
        return;
    }
    
    vi ans;
    for (int i = best.second - 1; i >= 0; i--)
    {
        int  k= ans.size();
        if ((a[i] > 0 && k % 2 == 0) || (a[i] < 0 && k % 2 == 1))
        {
            ans.push_back(i + 1);
        }
        
    }
    ans.push_back(best.second + 1);
    cout  << ans.size() << endl;
    give(ans);
    
    
 
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