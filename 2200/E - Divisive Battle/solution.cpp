#include <bits/stdc++.h>
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
const double PI = acos(-1.0);
const double EPS = 1e-9;
 
// --- Vector I/O ---
template<typename T> istream& operator>>(istream& in, vector<T>& a) { for(auto &x : a) in >> x; return in; }
template<typename T> ostream& operator<<(ostream& out, vector<T>& a) { for(auto &x : a) out << x << ' '; return out; }
 
// --- Debugging ---
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << (x) << nl;
#else
#define debug(x)
#endif
 
//----------------------------- SOLVE ----------------------------- 
 
const int MAXN = 1e6+5;
int spf[MAXN+5];
void precompute() {
    for (int i = 1; i <= MAXN; i++) {
        spf[i] = i;
    }
    for (int i = 2; i*i <= MAXN; i++) {
        if (spf[i] == i) {
            for (int j = i*i; j <= MAXN; j += i) {
                if (spf[j] == j) {
                    spf[j] = i;
                }
            }
        }
    }
}
 
void solve() {
    int n;
    cin >> n;
    vi a(n);
    cin >> a;
    if (is_sorted(all(a))) {
        cout << "Bob" << nl;
        return;
    }
    cout << nl;
    bool ok = true;
    vi base(n);
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) {
            base[i] = 1;
        }
        else {
            int p = spf[a[i]];
            int temp = a[i];
            while (temp%p == 0) {
                temp /= p;
            }
            if (temp != 1) {
                ok = false;
                break;
            }
            base[i] = p;
        }
    }
    if (!ok) {
        cout << "Alice" << nl;
        return;
    }
    debug(base);
    for (int i = 1; i < n; i++) {
        if (base[i] < base[i-1]) {
            cout << "Alice" << nl;
            return;
        }
    }
    cout << "Bob" << nl;
}
 
int32_t main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    precompute();
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}