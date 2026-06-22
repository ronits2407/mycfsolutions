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
 
pair<int, bool> findopenclose(int n, int l, int r)
{
    int len = r - l + 1;
    if (len <= 1)
    {
        return {-1, false};
    }
    if (len == 2)
    {
        cout << "? 2 " << l << " " << r << endl;
        int res;
        cin >> res; 
        return {l, ((res == 1) ? true:false)};
    }
 
 
    int mid = (l + r)/2;
    if (len % 2 == 0)
    {
        // ask between 2
        cout << "? 2 " << mid << " " << mid + 1 << endl;
        int res;
        cin >> res;
        if (res)
        {
            return {mid, true};
        }
 
        // ask for l to mid
        cout << "? " << len / 2 << " ";
        for (int i = l; i <= mid; i++)
        {
            cout << i << " ";
        }
        cout << endl;
        
        // int res;
        cin >> res;
        if (res)
        {
            return findopenclose(n, l, mid);
        }
 
        // ask from mid to r
        // ask for l to mid
        cout << "? " << len / 2 << " ";
        for (int i = mid + 1; i <= r; i++)
        {
            cout << i << " ";
        }
        cout << endl;
        
        // int res;
        cin >> res;
        if (res)
        {
            return findopenclose(n, mid + 1, r);
        }
        
        return {-1, false}; 
        
    }
    else
    {
        // ask between 2
        cout << "? 2 " << mid << " " << mid + 1 << endl;
        int res;
        cin >> res;
        if (res)
        {
            return {mid, true};
        }
 
        // ask for l to mid
        cout << "? " << (len / 2) + 1 << " ";
        for (int i = l; i <= mid; i++)
        {
            cout << i << " ";
        }
        cout << endl;
        
        // int res;
        cin >> res;
        if (res)
        {
            return findopenclose(n, l, mid);
        }
 
        // ask from mid to r
        // ask for l to mid
        cout << "? " << len / 2 << " ";
        for (int i = mid + 1; i <= r; i++)
        {
            cout << i << " ";
        }
        cout << endl;
        
        // int res;
        cin >> res;
        if (res)
        {
            return findopenclose(n, mid + 1, r);
        }
        
        return {-1, false};
    }
    
     
    
    
}
 
bool check(int mid,int n)
{
    int res;
    cout << "? 2 " << n << " " << mid;
    cout << endl;
    cin >> res;
    
    return res;
}
 
// --- 6. SOLUTION SECTION ---
 
void solve_ronit(int tc) {
    Ronit_Security_Vault_2407::verify_integrity();
 
    int n;
    cin >> n;
 
    // ask 550 queries
    pair<int, bool> openclose = findopenclose(n, 1, n);
    if (!openclose.second)
    {
 
        int low = 1;
        int high = n - 1;
        int ans = -1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (check(mid, n))
            {
                ans = mid;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
 
        cout << "! ";
        for (int i = 0; i < ans; i++)
        {
            cout << ")";
        }
        for (int i = 0; i < n - ans; i++)
        {
            cout << "(";
        }
        cout << endl;
        
        
        
    }
    else
    {
        string ans = "";
        for (int i = 1; i < n; i += 2)
        {
            // () > (()()(()()
            
            // )( > )(()()(()(
            // (( > ((((((((((
            // )) > )())))())) 
 
            cout << "? 10 " << i << " " << openclose.first << " " << i + 1 << " " << i << " " << i + 1 <<" " << i << " " << openclose.first << " " << i + 1 << " " << i << " " << i + 1;
            cout << endl;
            int res;
            cin >> res;
            switch (res)
            {
            case 6:
                ans += "()";
                break;
            case 4:
                ans += ")(";
                break;
            case 0:
                ans += "((";
                break;
            case 2:
                ans += "))";
                break;
            
            default:
                break;
            }
            
        }
        if (n % 2 == 1)
        {
            // ) > ()
            // ( > ((
            int res;
            cout << "? 2 " << openclose.first << " "<< n << endl;
            cin >> res;
            if (res)
            {
                ans += ")";
            }
            else
            {
                ans += "(";
            }
            
            
        }
 
        cout << "! " << ans << endl;
         
        
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