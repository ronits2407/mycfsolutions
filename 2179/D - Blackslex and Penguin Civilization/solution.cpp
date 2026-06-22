#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int n;
    cin >> n;
 
    cout << (int) pow(2, n) - 1 <<  ' ';
    for (int i = 1; i < n + 1; i++)
    {
        if (i == 1)
        {
            cout << (int) pow(2, n - 1) - 1 << ' ';
            continue;
        }
        
        // make a number whose 
        int k = (int)pow(2, n - i) - 1;
 
        for (int j = 0; j <= (int)pow(2, i - 1) - 1; j++)
        {
            int l = j;
            l = l << n - i + 1;
            l = l | k;
            cout << l << ' ';
        }
        
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