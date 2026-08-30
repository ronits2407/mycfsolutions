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
 
void solve(vector<char>& ans, string& s, char rover, char match, int count){
    for (int i = 0; i < s.size(); i++)
    {
        if(!count)return;
        if(s[i]==match && ans[i]=='0'){
            ans[i]=rover;
            count--;
        }
    }
    
}
void solve_ronit(int tc)
{
    int n;cin >> n;string s;cin >> s;
    int N = count(all(s), 'N');
    int S = count(all(s), 'S');
    int W = count(all(s), 'W');
    int E = count(all(s), 'E');
    // a -b = c - d ... a(N) + d(S) == c(N) + b(S)
    if((N + S)%2!=0 || (W + E)%2!=0){
        cout << "NO
";
        return;
    }
 
    int northa, southa, northb, southb;
    int easta, westa, eastb, westb;
    if(N%2==1){northa=N/2+1;southa=S/2+1;northb=N/2;southb=S/2;}
    else {northa=N/2;southa=S/2;northb=N/2;southb=S/2;}
    if(W%2==1){westa=W/2;easta=E/2;westb=W/2+1;eastb=E/2+1;}
    else{westa=W/2;easta=E/2;westb=W/2;eastb=E/2;}
    if(northa+southa+easta+westa == 0 || northb+southb+eastb+westb == 0){
        cout << "NO
";
        return;
    }
    vector<char> ans(n, '0');
    solve(ans, s, 'R', 'N', northa);
    solve(ans, s, 'R', 'S', southa);
    solve(ans, s, 'R', 'W', westa);
    solve(ans, s, 'R', 'E', easta);
 
    solve(ans, s, 'H', 'N', northb);
    solve(ans, s, 'H', 'S', southb);
    solve(ans, s, 'H', 'W', westb);
    solve(ans, s, 'H', 'E', eastb);
    for (int i = 0; i < n; i++)
    {
        cout << ans[i];
    }
    cout << "
";
    
}
 
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(20);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve_ronit(i);
    return 0;
}