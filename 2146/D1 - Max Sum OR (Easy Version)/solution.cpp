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
    int l, r;
    cin >> l >> r;
 
    int n = r - l + 1;
    vi a(n, -1);
    a[0] = 0;
    int sum = 0;
    for (int i = n - 1; i > 0; i--)
    {
        int number = i;
        if (a[number] != -1)
        {
            continue;
        }
        else
        {
            int digitcount = floor(log2(number)+1);
            int temp = ~0LL;
            temp = (temp << (digitcount));
            temp = ~temp;
            int final = temp ^ number;
            a[number] = final;
            a[final] = number;
            sum += 2 * (a[number]^number);
        }
        
        
    }
    
    cout << sum << endl;
    give(a);
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