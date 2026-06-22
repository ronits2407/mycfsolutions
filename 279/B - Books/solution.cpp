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
    
    int n, t;
    cin >> n >> t;
 
    vi a(n);
    ask(a);
 
    int l = 0;
    int r = -1;
    int sum = 0;
    int maxsum =0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= t)
        {
            l = i;
            r = i;
            break;
        }
        
    }
    if (r == -1)
    {
        cout << 0 << endl;
        return 0;
    }
    sum = a[l];
    maxsum = 1;
    
    
    while (true)
    {
        if (l >= n -1 || r >= n-1)
        {
            break;
        }
        
 
        if (r < n - 1 && sum + a[r+1] <= t)
        {
            r++;
            sum += a[r];
            maxsum = max(r-l+1, maxsum);
        }
        else if(r < n - 1)
        {
            if (l < r)
            {
                l++;
                sum -= a[l-1];
            }
            else
            {
                l++;
                r++;
                while (a[l] > t)
                {
                    l++;
                    r++;
                }
                if (l <= n-1)
                {
                    sum = a[l];
                    maxsum = max(maxsum, 1LL);
                }
                else
                {
                    break;
                }
                
                
                
            }
            
            
        }
        
        
        
        
    }
 
    cout << maxsum << endl;
    
    return 0;
}