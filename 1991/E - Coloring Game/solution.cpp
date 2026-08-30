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
 
void solve_ronit(int tc)
{
    int n, m;cin >> n >> m;
    map<int, set<int>> mp;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        mp[u].insert(v);
        mp[v].insert(u);
    }
    // check if bipartitie
    set<int> A, B;
    queue<int> Q;
    Q.push(1);
    vi dist(n+1, -1);
    dist[1]=0;
    bool isbipartite = true;
    A.insert(1);
    while (!Q.empty())
    {
        int u = Q.front();
        Q.pop();
        for (auto &&neigh : mp[u])
        {
            if(dist[neigh]==-1){
                Q.push(neigh);
                dist[neigh] = 1 + dist[u];
            }
            else{
                if((dist[neigh] + dist[u]+1)%2==1){
                    isbipartite = false;
                }
            }
            if(dist[neigh]%2==0){
                A.insert(neigh);
            }
            else{
                B.insert(neigh);
            }    
        }
    }
    if(isbipartite){
        cout << "Bob" << endl;
        if(n == 1){
            int a, b;
            cin >> a>> b;
            cout << "1 " << a << endl;
            return;
        }
        int a, b;
        cin >> a>> b;
        cout << "1 " << a << endl;
        A.erase(1);
 
        int c, d;
        cin >> c >> d;
        int second;
        if(c == a){
            // choose d
            cout << *B.begin() << " " << d << endl;
            B.erase(*B.begin());
            second = d;
        }
        else
        {
            cout << *B.begin() << " " << c << endl;
            B.erase(*B.begin());
            second = c;
        }
        int first = a;
 
        
        for (int i = 2; i < n; i++)
        {
            int e, f;
            cin>> e >> f;
            if( first == e || first == f){
                if(!A.empty()){
                    cout << *A.begin() << " " << first << endl;
                    A.erase(*A.begin());
                }
                else if (first == e && A.empty())
                {
                    cout << *B.begin() << " " << f << endl;
                    B.erase(*B.begin());
                }
                else if (first == f && A.empty())
                {
                    cout << *B.begin() << " " << e << endl;
                    B.erase(*B.begin());
                }
                
                
            }
            else
            {
                if(!B.empty()){
                    cout << *B.begin() << " " << second << endl;
                    B.erase(*B.begin());
                }
                else if (second == e && B.empty())
                {
                    cout << *A.begin() << " " << f << endl;
                    A.erase(*A.begin());
                }
                else if (second == f && B.empty())
                {
                    cout << *A.begin() << " " << e << endl;
                    A.erase(*A.begin());
                }
            }
            
            
            
        }
        
    }
    else
    {
        cout << "Alice" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "1 2" << endl;
            int a, b;cin>>a>>b;
        }
        
    }
    
    
    
    
    
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