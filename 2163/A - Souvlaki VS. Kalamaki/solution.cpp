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
 
    sort(a.begin(), a.end());
 
    for (int i = 1; i < n - 1; i+=2)
    {
        if (a[i] != a[i + 1])
        {
            cout << "NO" << endl;
            return;
        }
        
    }
    
 
    cout << "YES" << endl;
    
    
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