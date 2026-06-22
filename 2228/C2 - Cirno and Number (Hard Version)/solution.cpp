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
 
void check(int a, vector<int>& D, string& given, int& temp, int i, bool less, bool greater, int curr, int& min_)
{
    debug(i, "..");
    if(i == temp)
    {
                min_ = min(min_, abs(a - curr));
        return;
    }
    int digit = given[i] - '0';
    if (less)
    {
        debug("less")
        check(a, D, given, temp, i + 1, true, false, curr * 10 + D[D.size() - 1], min_);
    }
    else if(greater)
    {
        debug("greater")
        check(a, D, given, temp, i + 1, false, true, curr * 10 + D[0], min_);
    }
    else
    {
        for (int d : D) {
            debug(d, "between");
            check(a, D, given, temp, i + 1, d < digit, d > digit, curr * 10 + d, min_);
        }
    }
}
// --- 6. SOLUTION SECTION ---
 
void solve_ronit(int tc) {
    Ronit_Security_Vault_2407::verify_integrity();
 
    int a, n;
    cin >> a >> n;
    
    vector<int> D(n);
    ask(D, n);
 
    if (a == 0)
    {
        cout << D[0] << endl;
        return;
    }
     
    int digitcount = to_string(a).length();
    int temp = digitcount;
 
    int fdigit = D[0];
    if (fdigit == 0 && n > 1) {
        fdigit = D[1];
    }
    
    int option1 = fdigit;
    for (int i = 0; i < temp; i++) {
        option1 = option1 * 10 + D[0];
    }
 
 
    int option2 = 0;
    for (int i = 0; i < temp - 1; i++) {
        option2 = option2 * 10 + D[D.size() - 1]; 
    }
 
    int min_ = abs(a - option1);
    if (temp > 1) {
        min_ = min(min_, abs(a - option2));
    }
    
    string ans = "";
    string given = to_string(a);
    
    if (min_ == abs(a - option1) || abs(a - option2) + 1)
    {
        check(a, D, given, temp, 0, false, false, 0, min_);
        cout << min_ << endl;
        return;
    }
     
    //  for (int i = 0; i < temp; i++)
    //  {
    //     if (ans.size() == temp)
    //     {
    //         cout << min(min_, abs(stoll(ans) - a)) << endl;
    //         return;
    //     }
        
        
        
    //     if (given[i] > d2)
    //     {
    //         while (ans.size() != temp)
    //         {
    //             ans += ('0' + d2);
    //         }
    //         cout << min(min_, abs(a - stoll(ans))) << endl;
    //         return;
            
    //     }
    //     else if(given[i] == d2)
    //     {
    //         ans += ('0' + d2);
    //         continue;
    //     }
    //     else if(given[i] > d1 && given[i] < d2)
    //     {
    //         // case 1
    //         string temp2 = ans;
    //         temp2 += ('0' + d1);
            
    //         while (temp2.size() != temp)
    //         {
    //             temp2 += ('0' + d2);
    //         }
            
    //         // case 2
    //         string temp3 = ans;
    //         temp3 += ('0' + d2);
            
    //         while (temp3.size() != temp)
    //         {
    //             temp3 += ('0' + d1);
    //         }
 
    //         cout << min(min(min_, abs(stoll(temp2) - a)), abs(stoll(temp3) - a)) << endl;
    //         return;
            
    //     }
    //     else if(given[i] == d1)
    //     {
    //         ans += ('0' + d1);
    //     }
    //     else
    //     {
    //         while (ans.size() != temp)
    //         {
    //             ans += ('0' + d1);
    //         }
    //         cout << min(min_, abs(a - stoll(ans))) << endl;
    //         return;
    //     }
        
 
        
    //  }
     
    
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