#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int n;
    cin >> n;
 
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < n - 1; i++)
    {
        if (a[i] == -1)
        {
            a[i] = 0;
        }
        
    }
 
    if (a[0] == -1 && a[n - 1] == -1)
    {
        a[0] = 0;
        a[n - 1] = 0;
    }
    else if (a[0] == -1)
    {
        a[0] = a[n - 1];
    }
    else if(a[n - 1] == -1)
    {
        a[n - 1] = a[0];
    }
    
    cout << abs(a[0] - a[n - 1]) << endl; 
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
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