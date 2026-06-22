#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int x, y;
    cin >> x >> y;
    if (y > x)
    {
        cout << 2 <<endl;
    }
    else if ( x > (y + 1) && y > 1)
    {
        cout << 3 << endl;    
    }
    else
    {
        cout << -1 << endl;
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