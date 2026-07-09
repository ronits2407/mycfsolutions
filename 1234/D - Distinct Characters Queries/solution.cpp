#include <bits/stdc++.h>
using namespace std;
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
 
template <typename T>
struct Fenwick {
    int n;
    vector<T> tree;
    
    Fenwick(int n) : n(n), tree(n + 1, 0) {}
    
    struct Proxy {
        Fenwick* f; int i;
        void operator+=(T delta) {
            for (int k = i; k <= f->n; k += k & -k) f->tree[k] += delta;
        }
        operator T() const {
            T sum = 0;
            for (int k = i; k > 0; k -= k & -k) sum += f->tree[k];
            return sum;
        }
    };
    
    Proxy operator[](int i) { return {this, i}; }
};
 
int32_t main() 
{
    cout << fixed << setprecision(20);
 
    string s;
    cin >> s;
 
    int q;
    cin >> q;
 
    vector<Fenwick<int>> trees(26, Fenwick<int>(s.size()));
    for (int i = 0; i < s.size(); i++)
    {
        trees[s[i]-'a'][i+1] += 1;
    }
 
    while (q--)
    {
        int a;
        cin >> a;
        if (a == 1)
        {
            int b;
            char c;
            cin >> b >> c;
            trees[s[b-1]-'a'][b] += -1;
            trees[c-'a'][b] += 1;
 
            s[b-1] = c;
        }
        else
        {
            int b, c;
            cin >> b >> c;
            int ans = 0;
            for (int i = 0; i < 26; i++)
            {
                if (trees[i][c] - trees[i][b-1] > 0)
                {
                    ans++;
                }
                
            }
            cout << ans << endl;
            
        }
        
        
    }
    
     
 
 
 
    return 0;
}