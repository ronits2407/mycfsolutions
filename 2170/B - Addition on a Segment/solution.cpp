#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int n;
    cin >> n;
 
    int sum = 0;
    int zeros = 0;
 
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        if (b[i] == 0)
        {
            zeros++;
        }
        else
        {
            sum += b[i] - 1;
        }
        
        
 
    }
    sort(b.begin(), b.end());
 
    for (int i = n - 1; i >= zeros; i--)
    {
        if (sum >= n - 1)
        {
            cout << i + 1 - zeros << endl;
            return;
        }
        else
        {
            sum+=1;
        }
        
        
    }
    
 
    cout << 1 << endl;
    
    
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