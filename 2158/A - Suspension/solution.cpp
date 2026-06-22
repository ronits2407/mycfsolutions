#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int n;
    cin >> n;
 
    int y, r;
    cin >> y >> r;
 
    int players =0 ;
    players += r;
    n -= r;
 
    if (n >0)
    {
        players += min(y / 2, n);
    }
 
    cout << players << endl;
    
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