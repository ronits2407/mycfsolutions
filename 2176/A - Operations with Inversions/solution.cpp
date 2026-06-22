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
 
    int count = 0;
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = i - 1; j >= 0 ; j--)
        {
            if (a[i] < a[j])
            {
                count++;
                break;
            }
            
        }
        
    }
 
    cout << count << endl;
    
    
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