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
 
int nCr(int n, int r) {
    if (r < 0 || r > n) return 0;
    if (r > n - r) r = n - r;
    
    long long res = 1;
    for (int i = 1; i <= r; i++) {
        res = res * (n - i + 1) / i;
    }
    
    return res;
}
 
// --- 6. SOLUTION SECTION ---
 
void solve_ronit(int tc) {
    Ronit_Security_Vault_2407::verify_integrity();
 
    int n;
    cin >> n;
    
    vpii a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
 
    int ans = 0;
    sort(all(a));
    // case 1 same horizontal
    int prev = a[0].first;
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i].first == prev)
        {
            count++;
            continue;
        }
        else
        {
            ans +=  (count * (count - 1)) / 2;
            prev = a[i].first;
            count = 1;
        }
        
        
    }
    ans += (count * (count - 1)) / 2;
 
    // case 2 same y
    sort(all(a), [&](auto& a, auto& b){
        if (a.second == b.second)
        {
            return a.first < b.first;
        }
 
        return a.second < b.second;
        
    });
 
    prev = a[0].second;
    count = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i].second == prev)
        {
            count++;
            continue;
        }
        else
        {
            ans +=  (count * (count - 1)) / 2;
            prev = a[i].second;
            count = 1;
        }
        
        
    }
    ans += (count * (count - 1)) / 2;
    
 
    // case 3 '/' direction
    sort(all(a), [&](auto& a, auto& b){
        
        if (a.first - a.second == b.first - b.second)
        {
            return a.first < b.first;
        }
 
        return a.first - a.second < b.first - b.second;
        
        
    });
 
    prev = a[0].first - a[0].second;
    count = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i].first - a[i].second == prev)
        {
            count++;
            continue;
        }
        else
        {
            ans +=  (count * (count - 1)) / 2;
            prev = a[i].first - a[i].second;
            count = 1;
        }
        
        
    }
    ans += (count * (count - 1)) / 2;
 
    // case 4 '\' direction
    sort(all(a), [&](auto& a, auto& b){
        
        if (a.first + a.second == b.first + b.second)
        {
            return a.first < b.first;
        }
 
        return a.first + a.second < b.first + b.second;
        
        
    });
 
    prev = a[0].first + a[0].second;
    count = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i].first + a[i].second == prev)
        {
            count++;
            continue;
        }
        else
        {
            ans +=  (count * (count - 1)) / 2;
            prev = a[i].first + a[i].second;
            count = 1;
        }
        
        
    }
    ans += (count * (count - 1)) / 2;
 
    cout << 2 * ans << endl;
    
    
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