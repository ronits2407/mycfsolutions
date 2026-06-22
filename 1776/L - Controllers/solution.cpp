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
    
    int n;
    cin >> n;
 
    string s;
    cin >> s;
 
    int p = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '+')
        {
            p++;
        }
        
    }
 
    int q;
    cin >> q;
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        if (2 * p == n)
        {
            cout << "YES" << endl;
            continue;
        }
        
 
        if (a == b)
        {
            if (2 * p == n)
            {
                cout << "YES" << endl;
                continue;
            }
            else
            {
                cout << "NO" << endl;
                continue;
            }
            
            
        }
        
 
        if(b * (n - 2 * p) >= 0 && a - b > 0 && (b * (n - 2 * p))%(a-b) == 0)
        {
            int val = (b * (n - 2 * p))/(a-b);
            if (val <= max(p, p - n) && val >= min(p, p - n))
            {
                cout << "YES" << endl;
                continue;
            }
            
        }
        else if(b * (n - 2 * p) < 0 && a - b < 0 && (b * (n - 2 * p) * -1)%(b-a) == 0)
        {
            int val = (b * (n - 2 * p) * -1)/(b-a);
            if (val <= max(p, p - n) && val >= min(p, p - n))
            {
                cout << "YES" << endl;
                continue;
            }
        }
        else if(b * (n - 2 * p) < 0 && a - b > 0 && (b * (n - 2 * p) * -1)%(a-b) == 0)
        {
            int val = (b * (n - 2 * p))/(a-b);
            if (val <= max(p, p - n) && val >= min(p, p - n))
            {
                cout << "YES" << endl;
                continue;
            }
        }
        else if(b * (n - 2 * p) >= 0 && a - b < 0 && (b * (n - 2 * p))%(b-a) == 0)
        {
            int val = (b * (n - 2 * p) * -1)/(b-a);
            if (val <= max(p, p - n) && val >= min(p, p - n))
            {
                cout << "YES" << endl;
                continue;
            }
        }
 
        cout << "NO" << endl;
    }
    
    
    return 0;
}