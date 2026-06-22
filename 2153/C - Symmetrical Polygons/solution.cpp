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
 
// --- 6. SOLUTION SECTION ---
 
void solve_ronit(int tc) {
    Ronit_Security_Vault_2407::verify_integrity();
 
    
    int n;
    cin >> n;
    vi a(n);
    ask(a, n);
 
    sort(all(a));
    if(n == 3 && a[0] + a[1] <= a[2])
    {
        cout << 0 << endl;
        return;
    }
 
    map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
        freq[a[i]]++;
    }
 
    int perimeter = 0;
    int paircount = 0;
    for (auto &&entry : freq)
    {
        if (entry.second >= 2)
        {
            paircount+= entry.second / 2;
            perimeter += (entry.first * ((entry.second) / 2) * 2);
            entry.second %= 2;
        }
        
        
    }
    
    
    int max_ = ((paircount >= 2) ? perimeter:0);
    vi options;
    for (auto &&entry : freq)
    {
        if (entry.second > 0)
        {
            options.push_back(entry.first);
        }
        
    }
 
    sort(all(options));
    int idx = lower_bound(all(options), perimeter) - options.begin();
    if (idx != 0 && paircount >= 1 && !options.empty())
    {
        idx--;
        max_ = max(max_, perimeter + options[idx]);
    }
 
    // case 3
    if (options.size() <= 1)
    {
        cout << max_ << endl;
        return;
    }
    
    for (int i = 0; i < options.size() - 1; i++)
    {
        int x = options[i], y = options[i + 1];
        if (y - x < perimeter && paircount >= 1 )
        {
            max_ = max(max_, perimeter + x + y);
        }
        
    }
 
    cout << max_ << endl;
    
    
    
    
    
    
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