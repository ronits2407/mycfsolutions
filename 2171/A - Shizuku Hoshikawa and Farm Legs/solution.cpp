#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int n;
    cin >> n;
 
    if (n % 2 == 0)
    {
        n /= 2;
 
        if (n % 2 == 0)
        {
            cout << n / 2 + 1 << endl;
        }
        else
        {
            cout << (n - 1) / 2 + 1 << endl;
        }
        
        
    }
    else
    {
        cout << 0 <<endl; 
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