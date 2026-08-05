#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int, int>
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define vpii vector<pair<int, int>>
#define ask(v, n)                 \
    for (int i = 0; i < (n); ++i) \
        cin >> v[i];
 
#define give(v, n)                \
    for (int i = 0; i < (n); ++i) \
        cout << v[i] << ' ';      \
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
#define debug(x...)               \
    cerr << "[" << #x << "] = ["; \
    _print(x);
#else
#define debug(x...)
#endif
 
struct rectangle
{
    int w, h;
    char id;
};
 
void solve_ronit()
{
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
 
    int area = x1 * y1 + x2 * y2 + x3 * y3;
    int n = 0;
    while (n * n < area)
        n++;
 
    if (n * n != area)
    {
        cout << -1 << endl;
        return;
    }
 
    vector<rectangle> orig = {{x1, y1, 'A'}, {x2, y2, 'B'}, {x3, y3, 'C'}};
    vector<int> p = {0, 1, 2};
 
    do
    {
        for (int mask = 0; mask < 8; mask++)
        {
            vector<rectangle> r(3);
            for (int i = 0; i < 3; i++)
            {
                r[i] = orig[p[i]];
                if ((mask >> i) & 1)
                {
                    swap(r[i].w, r[i].h);
                }
            }
 
            if (r[0].w == n && r[1].w == n && r[2].w == n && (r[0].h + r[1].h + r[2].h == n))
            {
                cout << n << endl;
                for (int i = 0; i < 3; i++)
                {
                    for (int h = 0; h < r[i].h; h++)
                    {
                        for (int j = 0; j < n; j++)
                        {
                            cout << r[i].id;
                        }
                        cout << endl;
                        
                    }
                }
                return;
            }
 
            if (r[0].w == n && r[1].h == n - r[0].h && r[2].h == n - r[0].h && (r[1].w + r[2].w == n))
            {
                cout << n << endl;
                for (int h = 0; h < r[0].h; h++)
                {
                    for (int j = 0; j < n; j++)
                        {
                            cout << r[0].id;
                        }
                        cout << endl;
                }
                string bottom_row = "";
                for (int j = 0; j < r[1].w; j++)
                {
                    bottom_row += r[1].id;
                }
                for (int j = 0; j < r[2].w; j++)
                {
                    bottom_row += r[2].id;
                }
                
                for (int h = 0; h < n - r[0].h; h++)
                {
                    cout << bottom_row << endl;
                }
                return;
            }
        }
    } while (next_permutation(all(p)));
 
    cout << -1 << endl;
}
 
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(20);
    solve_ronit();
    return 0;
}