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
 
int dfs(int curr, int currp, map<int, vector<int>>& graph, vector<bool>& visited) {
    // visited[curr] = true;
    visited[curr] = true;
    debug(curr, currp);
 
    for (int neighbor : graph[curr]) {
        if (!visited[neighbor]) {
            int res = dfs(neighbor, curr, graph, visited);
            if (res != -1) return res;
        }
        else if (neighbor != currp) {
            return  neighbor;
        }
    }
    return -1;
}
 
vector<int> bfs(int start, int n, map<int, vector<int>>& graphs) {
    vector<int> distances(n + 1, -1);
    queue<int> q;
 
    q.push(start);
    distances[start] = 0;
 
    while (!q.empty()) {
        int curr = q.front();
        q.pop();
 
        for (int neighbor : graphs[curr]) {
            if (distances[neighbor] == -1) {
                distances[neighbor] = distances[curr] + 1;
                q.push(neighbor);
            }
        }
    }
 
    return distances;
}
 
// --- 6. SOLUTION SECTION ---
 
void solve_ronit(int tc) {
    Ronit_Security_Vault_2407::verify_integrity();
 
    int n, m, v;
    cin >> n >> m >> v;
 
    map<int, vector<int>> graph;
    for (int i = 0; i < n; i++) {
        int u, w;
        cin >> u >> w;
        graph[u].push_back(w);
        graph[w].push_back(u);
    }
 
    if (v == m)
    {
        cout << "NO" << endl;
        return;
    }
    
 
    vector<int> distances1(n + 1, -1);
    
    vector<bool> visited1(n + 1, false);
    int res1 = dfs(v, -1, graph, visited1);
 
    vector<int> distV = bfs(v, n, graph);
    vector<int> distM = bfs(m, n, graph);
    int res2 = -1;
 
    if(distV[res1] < distM[res1])
    {
        cout << "YES
";
        return;
    }
    else
    {
        cout << "NO
";
        return;
    }
    // visited1[v] = true;
    // distances1[v] = 0;
    // vector<int> distances2(n + 1, -1);
    // vector<bool> visited2(n + 1, false);
    // visited2[m] = true;
    // distances2[m] = 0;
 
 
    // int res1 = dfs(v, -1, graph, distances1, visited1);
    // int res2 = dfs(m, -1, graph, distances2, visited2);
    // debug(res1, res2);
 
    if (res1 == res2  && res1 == 0)
    {
        cout << "YES
";
        return;
    }
    
    if(res1 < res2)
    {
        cout << "YES
";
    }
    else
    {
        cout << "NO
";
    }
    
}
 
int32_t main() {
    boost_ronit;
    cout << fixed << setprecision(20);
 
    int t = 1;
    if (cin >> t) {
        for (int i = 1; i <= t; i++) {
            solve_ronit(i);
        }
    }
    return 0;
}