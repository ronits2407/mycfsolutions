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
    int p, q;
    cin >> p >> q;
 
    int X = 2 * (p + 2 * q) + 1;
    for (int i = 1; i*i <= X; i+=2)
    {
        if (X % i == 0 && (X / i) % 2 == 1)
        {
            int n = (i - 1)/2;
            int m = ((X / i) - 1)/2;
            if (p >= abs(m-n))
            {
                cout  << n << " "<<  m << endl;
                return;
            }
            
        }
        
    }
    cout << -1 << endl;
    return;
    
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