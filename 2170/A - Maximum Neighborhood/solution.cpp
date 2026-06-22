#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int n;
    cin >> n;
 
    if (n == 1 || n == 2)
    {
        if (n == 1)
        {
            cout << 1 << endl;
            return;
        }
        else
        {
            cout << 9 << endl;
            return;
        }
        
        
    }
 
    int sum1 = (n * n) + (n * n) - 1 + (n * n - n);
    int sum2 = (n * n - 1) + (n * n) + (n * n - n - 1) + (n * n - 2);
    int sum3 = (n * n - 1) + (n * n - n) + (n * n - n - 1) + (n * n - n -2) + (n * n - 2 * n - 1);
 
    cout << max(sum1, max(sum2, sum3)) << endl;
    
    
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