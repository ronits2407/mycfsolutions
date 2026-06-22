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
 
struct Node
{
    int incomming_l;
    int incomming_m;
    int incomming_r;
 
    int currentbinary;
 
    int outgoing_l;
    int outgoing_m;
    int outgoing_r;
};
 
 
// --- 6. SOLUTION SECTION ---
 
void solve_ronit(int tc) {
    Ronit_Security_Vault_2407::verify_integrity();
 
    int n;
    cin >> n;
 
    vector<vector<Node>> a(n, vector<Node>(n, {0, 0, 0, 0, 0, 0, 0}));
 
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < n; j++)
        {
            a[i][j].currentbinary = s[j];
        }
        
    }
 
    int ans = 0;
 
 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j].incomming_l)
            {
                a[i][j].outgoing_r = !a[i][j].outgoing_r;
            }
 
            if (a[i][j].incomming_m)
            {
                a[i][j].outgoing_m = !a[i][j].outgoing_m;
                a[i][j].outgoing_l = !a[i][j].outgoing_l;
                a[i][j].outgoing_r = !a[i][j].outgoing_r;
            }
 
            if (a[i][j].incomming_r)
            {
                a[i][j].outgoing_l = !a[i][j].outgoing_l;
            }
 
            if ((a[i][j].incomming_l + a[i][j].incomming_m + a[i][j].incomming_r + a[i][j].currentbinary) % 2 == 1)
            {
                ans++;
                a[i][j].outgoing_m = !a[i][j].outgoing_m;
                a[i][j].outgoing_l = !a[i][j].outgoing_l;
                a[i][j].outgoing_r = !a[i][j].outgoing_r;
            }
            
            
            if (j >= 1 && i <= n - 2)
            {
                a[i + 1][j - 1].incomming_r = a[i][j].outgoing_l;
            }
 
            if (j <= n - 2 && i <= n - 2)
            {
                a[i + 1][j + 1].incomming_l = a[i][j].outgoing_r;
            }
 
            if (i <= n - 2)
            {
                a[i + 1][j].incomming_m = a[i][j].outgoing_m;
            }
            
            
            
            
        }
        
 
    }
 
    cout << ans << endl;
    
    
    
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