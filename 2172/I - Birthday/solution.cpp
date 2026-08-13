#include <bits/stdc++.h>
 
// PBDS headers
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace std;
using namespace __gnu_pbds;
 
// PBDS indexed_set definition
typedef tree<
    int, 
    null_type, 
    less<int>, 
    rb_tree_tag, 
    tree_order_statistics_node_update> 
    indexed_set;
 
#define int long long
#define pii pair<int, int>
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define vpii vector<pair<int, int>>
#define ask(v, n) \
for (int i = 0; i < (n); ++i) \
cin >> v[i];
 
#define give(v, n) \
for (int i = 0; i < (n); ++i) \
cout << v[i] << ' '; \
cout << '
';
 
const int MOD = 1e9 + 7;
const int INF = 1e18;
const double PI = 3.1415926535897932384626433832795;   
void _print() { cerr << "]
"; }
template <typename T, typename... Args>
void _print(T t, Args... args)
{
    cerr << t << (sizeof...(args) ? ", " : "");
    _print(args...);
}
#ifndef ONLINE_JUDGE
#define debug(x...) \
    cerr << "[" << #x << "] = ["; \
    _print(x);
#else
#define debug(x...)
#endif
 
int power(int base, int exp) {
    int res = 1;
    while (exp) {
        if (exp % 2) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}
 
int nCr(int n, int r) {
    if (r < 0 || r > n) return 0;
    if (r > n - r) r = n - r;
    
    int num = 1, den = 1;
    for (int i = 0; i < r; i++) {
        num = (num * (n - i)) % MOD;
        den = (den * (i + 1)) % MOD;
    }
    
    return (num * power(den, MOD - 2)) % MOD;
}
 
int crossproduct(pii A, pii B, pii C)
{
    return ((B.first - A.first)*(C.second-A.second)-(C.first-A.first)*(B.second-A.second));
}
double dist(pii a, pii b)
{
    int num = a.second * (a.first-b.first)+a.first*(b.second-a.second);
    double den = sqrt((a.first-b.first)*(a.first-b.first)+(a.second-b.second)*(a.second-b.second));
    return num/den;
}
void solve_ronit()
{
    int n, r;
    cin >> n >> r;
    vpii a(n);
    for(int i = 0; i < n ; i++){
        cin >> a[i].first >> a[i].second;
    }
    if (n == 1)
    {
        cout << PI * r * r  /2;
        return;
    }
    
    sort(all(a));
    vpii upper, lower;
    for (int i = 0; i < n; i++)
    {
        while (upper.size() >= 2 && crossproduct(upper[upper.size()-2], upper[upper.size()-1], a[i]) > 0)
        {
            debug(crossproduct(upper[upper.size()-2], upper[upper.size()-1], a[i]), i);
            upper.pop_back();
        }
        upper.push_back(a[i]);
    }
    
    for (int i = n-1; i >= 0; i--)
    {
        while (lower.size() >= 2 && crossproduct(lower[lower.size()-2], lower[lower.size()-1], a[i]) > 0)
        {
            debug(i);
            lower.pop_back();
        }
        lower.push_back(a[i]);
    }
    double dist_min = LLONG_MAX;
    for (int i = 0; i < upper.size()-1; i++)
    {
        dist_min = min(dist_min, -1*dist(upper[i], upper[i+1]));
    }
    for (int i = lower.size()-1; i >0 ; i--)
    {
        dist_min = min(dist_min, dist(lower[i], lower[i-1]));
        debug(i, dist(lower[i], lower[i-1]));
    }
    
    if (dist_min <= 0)
    {
        cout << PI * r * r / 2 << "
";
        return;
    }
 
    cout << r * r * acos(dist_min/r)-dist_min * sqrt(r*r-dist_min*dist_min) << "
";
    
}
 
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(20);
    solve_ronit();
    return 0;
}