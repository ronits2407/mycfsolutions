#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int n, k;
    cin >> n >> k;
 
    if (k == 1)
    {
        cout << "YES" << endl;
        return;
    }
 
    if (n % 2 == 0)
    {
        cout << "YES" << endl;
        return;
    }
    else if (n % 2 == 1 && k % 2 == 1 && n >= k)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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