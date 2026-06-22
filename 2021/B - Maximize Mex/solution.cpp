#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int, int>
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define vpii vector<pair<int, int>>
#define ask(v, n) for(int i = 0; i < n ; ++i) cin >> v[i]
#define give(v, n) for(int i = 0; i < n; ++i){ cout << v[i] << ' ';} cout << endl
const int MOD = 1e9 + 7;
const int INF = 1e18;
void _print() { cerr << "]
"; }
template <typename T, typename... Args> void _print(T t, Args... args) {
    cerr << t << (sizeof...(args) ? ", " : "");
    _print(args...);
}
#ifndef ONLINE_JUDGE
    #define debug(x...) cerr << "[" << #x << "] = ["; _print(x);
#else
    #define debug(x...)
#endif
 
void solve_ronit(int tc) {
    int n, x;
    cin >> n >> x;
 
    vi a(n);
    ask(a, n);
 
    vi freq(n + 10, 0);
    for (int i = 0; i < n; i++)
    {
        if (a[i] > n + 1)
        {
            continue;
        }
        
        freq[a[i]]++;
    }
 
    int mex = 0;
    for (int i = 0; i <= n + 1 ; i++)
    {
        if (freq[i] >= 1)
        {
            mex++;
            int remaining = freq[i] - 1;
            if (i + x <= n)
            {
                freq[i + x] += remaining;
            }
            
        }
        else
        {
            break;
        }
        
        
    }
    cout << mex << endl;
    
    
    
}
 
int32_t main() {
    cout << fixed << setprecision(20);int t;cin >> t;for (int i = 0; i < t; i++)solve_ronit(i);return 0;
}