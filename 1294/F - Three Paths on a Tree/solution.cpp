/*
__________              .__  __   
\______   \ ____   ____ |__|/  |_ 
 |       _//  _ \ /    \|  \   __\
 |    |   (  <_> )   |  \  ||  |  
 |____|_  /\____/|___|  /__||__|  
        \/            \/          was here :)
 
*/
 
 
 
 
 
 
 
 
 
/**
 * ------------------------------------------------------------------
 * @file:   ronits2407_core.cpp
 * @author: Ronit (ronits2407)
 * @notice: SECURE TEMPLATE - AUTHORIZED USE ONLY
 * ------------------------------------------------------------------
 **/
 
// --- 1. SAFE COMPILER OPTIMIZATIONS ---
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
 
#include <bits/stdc++.h>
using namespace std;
 
// --- 2. RONIT SECURITY VAULT (Anti-Plagiarism) ---
namespace Ronit_Security_Vault_2407 {
    const string OWNER = "ronits2407";
    const string HASH = "X92-B77-SECURE";
    
    // Dead code signature
    inline void verify_integrity() {
        volatile int check = 2407;
        if (check != 2407) throw "Integrity Failure";
    }
}
 
// --- 3. MACROS & ALIASES ---
#define int long long
using ll = long long;
using ld = long double;
typedef long long ll;
typedef long double ld;
#define pb push_back
#define vll vector<ll>
#define pii pair<int, int>
#define all(v) v.begin(), v.end()
#define sz(v) (int)v.size()
#define boost_ronit ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define make_pair mp
#define vi vector<ll>
#define vpii vector<pair<int, int>>
#define ask(v, n) for(int i = 0; i < n ; ++i) cin >> v[i]
#define give(v, n) for(int i = 0; i < n; ++i){ cout << v[i] << ' ';} cout << endl
 
const int MOD = 1e9 + 7;
const ll INF = 1e18;
 
// --- 4. DEBUGGING SUITE (Local Only) ---
void _print() { cerr << "]
"; }
template <typename T, typename... Args>
void _print(T t, Args... args) {
    cerr << t << (sizeof...(args) ? ", " : "");
    _print(args...);
}
 
#ifndef ONLINE_JUDGE
    #define debug(x...) cerr << "[" << #x << "] = ["; _print(x);
#else
    #define debug(x...)
#endif
 
// --- 5. MODULAR ARITHMETIC ENGINE ---
struct Mint {
    ll val;
    Mint(ll v = 0) { val = v % MOD; if (val < 0) val += MOD; }
    
    // Operators
    Mint operator+(const Mint& o) const { return Mint(val + o.val); }
    Mint operator-(const Mint& o) const { return Mint(val - o.val); }
    Mint operator*(const Mint& o) const { return Mint(val * o.val); }
    
    // Mod Inverse & Division
    Mint pow(ll exp) const {
        Mint res = 1, base = *this;
        while (exp > 0) {
            if (exp % 2) res = res * base;
            base = base * base;
            exp /= 2;
        }
        return res;
    }
    Mint inv() const { return pow(MOD - 2); }
    Mint operator/(const Mint& o) const { return *this * o.inv(); }
};
 
 
vi diameterpath(int n, vector<vi>& graph)
{
    vi result;
    // result.push_back(1);
 
    queue<int> Q;
    Q.push(1);
    vector<bool> visited(n + 1, false);
    visited[1] = true;
    int last = 1;
    while (!Q.empty())
    {
        int u = Q.front();
        Q.pop();
        last = u;
        
        for (auto &&neigh : graph[u])
        {
            if (!visited[neigh])
            {
                visited[neigh] = true;
                Q.push(neigh);
            }
            
        }
        
    }
    vi parent(n + 1, -1);
    parent[last] = last;
    Q.push(last);
    int newlast = -1;
    while (!Q.empty())
    {
        int u = Q.front();
        Q.pop();
        newlast = u;
        
        for (auto &&neigh : graph[u])
        {
            if (parent[neigh] == -1)
            {
                parent[neigh] = u;
                Q.push(neigh);
            }
            
        }
    }
 
    // result.push_back(last);
    int curr = newlast;
    while (curr != last)
    {
        result.push_back(curr);
        curr = parent[curr];
    }
    result.push_back(last);
    
    return result;
 
 
 
    
    
}
 
int32_t main() {
    boost_ronit;
    cout << fixed << setprecision(20);
 
    int n;
    cin >> n;
 
    vector<vector<int>> graph(n + 1, vector<int>());
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
 
    }
 
    vi path = diameterpath(n, graph);
 
    // give(path, path.size());
    int count = path.size() - 1;
    int c = path[1];
    vi distances(n + 1, -1);
    for (int i = 1; i < path.size() - 1; i++)
    {
        int best = path[i];
        queue<int> Q;
        Q.push(path[i]);
        distances[path[i]] = 0;
        int last = path[i];
        vi curr; 
        curr.push_back(path[i]);
        while (!Q.empty())
        {
            int u = Q.front();
            Q.pop();
            last = u;
 
            for (auto &&neigh : graph[u])
            {
                debug(u, neigh);
                if (distances[neigh] == -1 && neigh != path[i - 1] && neigh != path[i + 1])
                {
                    debug("got inside");
                    distances[neigh] = distances[u] + 1;
                    Q.push(neigh);
                    curr.push_back(neigh);
                }
            }
        }
        debug(last);
        if (path.size() - 1 + distances[last] > count)
        {
            count = path.size() -1 + distances[last];
            c = last;
        }
        for (int node : curr) {
            distances[node] = -1;
        }
        
        
        
    }
 
    cout << count << endl;
    cout << path[0] << " " << path.back() << " " << c << endl;
    
    return 0;
}
 