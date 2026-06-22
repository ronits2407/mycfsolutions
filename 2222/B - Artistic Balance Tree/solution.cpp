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
 
    int n, m;
    cin >> n >> m;
 
    vi a(n);
    ask(a, n);
 
    vi x(m);
    ask(x, m);
 
    vi odd;
    vi even;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            odd.push_back(a[i]);
        }
        else
        {
            even.push_back(a[i]);
        }
        
        
    }
 
    sort(all(odd));
    sort(all(even));
    int oddptr = odd.size() - 1;
    int evenptr = even.size() - 1;
 
    for (int i = 0; i < m;i++)
    {
        if (x[i] % 2 == 1)
        {
            if (odd[oddptr] > 0)
            {
                oddptr--;
            }
            else if(oddptr == odd.size() - 1)
            {
                oddptr--;
            }
            
        }
        else
        {
            if (even[evenptr] > 0)
            {
                evenptr--;
            }
            else if(evenptr == even.size() - 1)
            {
                evenptr--;
            }
            
        }
        
        
    }
 
    int sum = 0;
    for (int i = 0; i <= oddptr; i++)
    {
        sum += odd[i];
    }
 
    for (int i = 0; i <= evenptr; i++)
    {
        sum += even[i];
    }
    
    cout << sum << endl;
    
    
    
    
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