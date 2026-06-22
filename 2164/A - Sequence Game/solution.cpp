#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int n;
    cin >> n;
 
 
    vector<int> a(n);
 
    int minimum = LONG_LONG_MAX, maximum =  LONG_LONG_MIN;
 
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
 
        if (a[i] > maximum)
        {
            maximum = a[i];
        }
 
        if (a[i] < minimum)
        {
            minimum = a[i];
        }
        
        
    }
 
    int x;
    cin >> x;
 
    if (x >= minimum && x <= maximum)
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