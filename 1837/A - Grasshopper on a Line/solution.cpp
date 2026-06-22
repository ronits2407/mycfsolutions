#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int x, k;
    cin >> x >> k;
 
    if (x % k != 0)
    {
        cout << 1 <<endl << x << endl;
    }
    else
    {
        cout << 2 << endl << x + 1 << ' ' << -1 << endl; 
    }
    
    
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