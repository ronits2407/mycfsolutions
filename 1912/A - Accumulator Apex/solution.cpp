#include <bits/stdc++.h>
 
// PBDS headers
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace std;
using namespace __gnu_pbds;
 
// PBDS indexed_set definition
typedef tree<
    int, 
    null_type, 
    less<int>, 
    rb_tree_tag, 
    tree_order_statistics_node_update> 
    indexed_set;
 
#define int long long
#define pii pair<int, int>
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define vpii vector<pair<int, int>>
#define ask(v, n) \
    for (int i = 0; i < (n); ++i) \
        cin >> v[i];
 
#define give(v, n) \
    for (int i = 0; i < (n); ++i) \
        cout << v[i] << ' '; \
    cout << '
';
 
const int MOD = 1e9 + 7;
const int INF = 1e18;
void _print() { cerr << "]
"; }
template <typename T, typename... Args>
void _print(T t, Args... args)
{
    cerr << t << (sizeof...(args) ? ", " : "");
    _print(args...);
}
#ifndef ONLINE_JUDGE
#define debug(x...) \
    cerr << "[" << #x << "] = ["; \
    _print(x);
#else
#define debug(x...)
#endif
 
int power(int base, int exp) {
    int res = 1;
    while (exp) {
        if (exp % 2) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}
 
int nCr(int n, int r) {
    if (r < 0 || r > n) return 0;
    if (r > n - r) r = n - r;
    
    int num = 1, den = 1;
    for (int i = 0; i < r; i++) {
        num = (num * (n - i)) % MOD;
        den = (den * (i + 1)) % MOD;
    }
    
    return (num * power(den, MOD - 2)) % MOD;
}
struct Chunk {
    long long req;
    long long gain;
    int list_idx;
    int chunk_idx;
 
    bool operator<(const Chunk& other) const {
        if (req != other.req)
            return req < other.req;
        if (gain != other.gain)
            return gain > other.gain;
        if (list_idx != other.list_idx)
            return list_idx < other.list_idx;
        return chunk_idx < other.chunk_idx;
    }
};
 
void solve_ronit()
{
    int x;
    int k;
    cin >> x >> k;
    set<Chunk> s;
 
    for (int i = 0; i < k; i++) {
        int count;
        cin >> count;
        vector<int> temp(count);
        ask(temp, count);
 
        int curS = 0;
        int maxS = 0;
        int chunkStartS = 0;
        int maxReq = 0;
        int chunkIdx = 0;
 
        for (int j = 0; j < count; j++) {
            curS += temp[j];
            maxReq = max(maxReq, -curS);
            if (curS > maxS) {
                int gain = curS - chunkStartS;
                s.insert({maxReq, gain, i, chunkIdx++});
                chunkStartS = curS;
                maxS = curS;
            }
        }
    }
 
    while (true) {
        auto it = s.begin();
        if (it == s.end()) break;
        if (x < it->req) break;
        x += it->gain;
        s.erase(it);
    }
 
    cout << x << "
";
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(20);
    solve_ronit();
    return 0;
}