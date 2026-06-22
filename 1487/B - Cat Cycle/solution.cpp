#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int n, k;
    cin >> n >> k;
 
    if (n % 2 == 0)
    {
        cout << ((k - 1) % n) + 1 << endl;
        return;
    }
    else
    {
        int hour_add = (n - 1) / 2;
 
        cout << (((int)ceil(k /(double) hour_add - 1) + k - 1) % n) + 1 << endl;
        return;
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