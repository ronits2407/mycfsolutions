#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int k, x;
    cin >> k >> x;
 
    while (k--)
    {
        if ((x - 1) % 3 == 0 && ((x - 1)/3) % 2 == 1)
        {
            x = (x - 1) / 3;
        }
        else
        {
            x *= 2;
        }  
    }
 
    cout << x << endl;
    
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