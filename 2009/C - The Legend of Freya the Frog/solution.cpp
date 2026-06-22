#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int x, y, k;
    cin >> x >> y >> k;
 
    int x_step = (x + k - 1) / k;
    int y_step = (y + k  - 1) / k;
 
 
    if (y_step > x_step)
    {
        cout << x_step + y_step + (y_step - x_step);
    }
    else if(x_step > y_step)
    {
        cout << x_step + y_step + (x_step - y_step) - 1;
    }
    else
    {
        cout << x_step + y_step;
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