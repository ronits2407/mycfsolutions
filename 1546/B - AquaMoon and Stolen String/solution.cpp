// █░█ ▀█▀ █▀█ ▄▀█ █▀█ ▀█▀ █▀█ ▄█ █▀█
// █▀█ ░█░ █▀▄ █▀█ █▀▀ ░▄▀ █▄█ ░█ ▄█░
// ▀░▀ ░▀░ ▀░▀ ▀░▀ ▀░░ ▀▀▀ ▀▀▀ ░▀ ▀▀▀
// ==================================
 
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <map>
#include <cmath>
#include <set>
using namespace std;
const char spc = ' ';
const char nl = '
';
 
// --- Make all ints 64-bit ---
#define int long long
 
// --- Data Types ---
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<ll> vll;
typedef vector<vector<ll>> vvll;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef queue<int> qi;
typedef vector<bool> vb;
typedef queue<ll> qll;
typedef map<int,int> mpii;
typedef map<ll,ll> mpll;
 
// --- Macros ---
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(x) (int)(x).size()
#define srt(x) sort(all(x))
#define rsort(x) sort(rall(x))
 
// --- Bit Utils ---
inline bool bit(int x, int i) { return (x >> i) & 1; }
inline int setbit(int x, int i) { return x | (1LL << i); }
inline int clearbit(int x, int i) { return x & ~(1LL << i); }
inline int popcount(int x) { return __builtin_popcountll(x); }
inline bool is_pow2(int n) { return n > 0 && (n & (n - 1)) == 0; }
 
// --- Constants ---
const int MOD = 1e9 + 7;
const int MOD2 = 998244353;
const ll INF = 1e18;
const double EPS = 1e-9;
const int MAXN = 1e6 + 5;
 
// --- Vector I/O ---
template<typename T> istream& operator>>(istream& in, vector<T>& a) { for(auto &x : a) in >> x; return in; }
template<typename T> ostream& operator<<(ostream& out, vector<T>& a) { for(auto &x : a) out << x << ' '; return out; }
 
// --- Debugging ---
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << (x) << nl;
#else
#define debug(x)
#endif
 
// --- Math Utils ---
int power(int base, int exp) {
    int res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}
 
int modInverse(int n) {
    return power(n, MOD - 2);
}
 
int fact[MAXN], invFact[MAXN];
void precomputeFactorials(int n = MAXN - 1) {
    fact[0] = 1;
    invFact[0] = 1;
    for (int i = 1; i <= n; i++) {
        fact[i] = (fact[i - 1] * i) % MOD;
    }
    invFact[n] = modInverse(fact[n]);
    for (int i = n - 1; i >= 1; i--) {
        invFact[i] = (invFact[i + 1] * (i + 1)) % MOD;
    }
}
 
int nCr(int n, int r) {
    if (r < 0 || r > n) return 0;
    return fact[n] * invFact[r] % MOD * invFact[n - r] % MOD;
}
 
// --- Sieve of Eratosthenes ---
vector<int> primes;
bool is_prime[MAXN];
void sieve(int n = MAXN - 1) {
    fill(is_prime, is_prime + n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int p = 2; p * p <= n; p++) {
        if (is_prime[p]) {
            for (int i = p * p; i <= n; i += p)
                is_prime[i] = false;
        }
    }
    for (int p = 2; p <= n; p++) {
        if (is_prime[p]) primes.push_back(p);
    }
}
 
//----------------------------- SOLVE ----------------------------- 
    
void solve() {
    int n;
    cin>>n;
    int m;
    cin>>m;
    vs s;
    for(int i=0;i<2*n-1;i++){
        string x;
        cin>>x;
        s.push_back(x);
    }
    string ans="";
    for(int j=0;j<m;j++){
        vi freq(26,0);
        for(int i=0;i<2*n-1;i++){
            freq[s[i][j]-'a']++;
        }
        for(int i=0;i<n;i++){
            if(freq[s[i][j]-'a']&1){
                ans+=s[i][j];
                break;
            }
        }
    }
    cout<<ans<<endl;
}
 
int32_t main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // Uncomment if combinatorics or primes are needed for the problem
    // precomputeFactorials();
    // sieve();
    
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}