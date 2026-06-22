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
 
 
int32_t main()
{
    cout << fixed << setprecision(20);
    
    int n, k;
    cin >> n >> k;
 
    string s;
    cin >> s;
 
    int len = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] > s[i % len])
        {
            break;
        }
        else if(s[i] < s[i % len])
        {
            len = i + 1;
        }
        
        
    }
 
    string best = s.substr(0, len);
    for (int i = 0; i < k; i++)
    {
        cout << best[i % len];
    }
    cout << endl;
    
    
 
    return 0;
}