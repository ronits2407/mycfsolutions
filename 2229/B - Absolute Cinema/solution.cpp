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
    int n;
    cin >> n;
 
    vi a(n);
    vi b(n);
 
    ask(a, n);
    ask(b, n);
 
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > b[i])
        {
            swap(a[i], b[i]);
        }
        ans +=  max(a[i], b[i]);
        
    }
    cout << ans + *max_element(all(a)) << endl;
    
}
 
int32_t main() {
    cout << fixed << setprecision(20);int t;cin >> t;for (int i = 0; i < t; i++)solve_ronit(t);return 0;
}