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
 
bool checkrbs(string s)
{
 
    int n = s.size();
    stack<char> S;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            S.push(s[i]);
        }
        else if(!S.empty())
        {
            S.pop();
        }
        else
        {
            return false;
        }
        
        
        
    }
 
    return S.empty();
    
}
 
string rev(string s)
{
    
    int n = s.size();
    for (int i = 0; i < n/2; i++)
    {
        int temp = s[i];
        s[i] = s[n - 1 - i];
        s[n  - 1 - i] = temp;
    }
    
    return s;
}
 
void solve_ronit(int tc)
{
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    
    
    int l = 0;
    int r = n-1;
    vector<bool> a(n, false);
    int leftcount = 0, rightcount = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            leftcount++;
        }
        else
        {
            rightcount++;
        }
        
        
    }
    if (leftcount != rightcount)
    {
        cout << -1 << endl;
        return;
    }
 
    if (checkrbs(s) || checkrbs(rev(s)))
    {
        vi ans(n, 1);
        cout << 1 << endl;
        give(ans);
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            l = i;
            break;
        }
        
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == ')')
        {
            r = i;
            break;
        }
        
    }
    debug(l, r, tc);
    while (l < r)
    {
        if (s[l] == '(' && s[r] == ')')
        {
            a[l] = true;
            a[r] = true;
            l++;
            r--;
        }
        else if(s[l] == '(')
        {
            r--;
        }
        else if(s[r] == ')')
        {
            l++;
        }
        else
        {
            l++;
            r--;
        }
        
        
 
        
        
    }
 
    int falsecount = 0;
    
    vi ans(n);
    for (int i = 0; i < n; i++)
    {
        if (a[i])
        {
            ans[i] = 1;
            debug("hi");
        }
        else
        {
            ans[i] = 2;
            falsecount++;
        }
        
        
        
    }
    if (falsecount > 0 && falsecount < n)
    {
        cout << 2 << endl;
    }
    else
    {
        cout << 1 << endl;
        vi aoinf(n, 1);
        give(aoinf);
        return;
    }
    
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