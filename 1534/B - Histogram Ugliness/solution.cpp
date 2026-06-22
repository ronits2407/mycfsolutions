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
 
    if (n == 1)
    {
        cout << a[0] << endl;
        return;
    }
    
    int ugliness = 0;
 
    int previous_height = 0;
    for (int i = 0; i < n; i++)
    {
        ugliness += abs(previous_height- a[i]);
        previous_height = a[i];
         
        
    }
 
    ugliness += a[n-1];
 
 
    if (a[1] < a[0])
    {
      ugliness -= a[0] - a[1];
      a[0] = a[1];
    }
 
    for (int i = 1; i < n - 1; i++)
    {
        if (a[i-1] < a[i] && a[i] > a[i+1])
        {
            ugliness -= a[i] - max(a[i-1], a[i+1]);
            a[i] = max(a[i-1], a[i+1]);
        }
        
        
    }
 
    if (a[n - 2] < a[n - 1])
    {
      ugliness -= a[n - 1] - a[n - 2];
      a[0] = a[1];
    }
 
    cout << ugliness << endl;
    
    
    
    
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