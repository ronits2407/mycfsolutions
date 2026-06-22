#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int a, b;
    cin >> a >> b;
 
    if (2 * a < b || 2 * b < a)
    {
        cout << min(a, b);
    }
    else
    {
        cout << (a + b) / 3;
    }
 
    cout << endl; 
    
    
}
 
int32_t main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--)
    {
        solve();
    }
 
    return 0;
}