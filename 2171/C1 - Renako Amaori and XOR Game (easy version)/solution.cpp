#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int n;
    cin >> n;
 
    vector<int> a(n);
    vector<int> b(n);
    int a_status = 0;
    int b_statis = 0;
    int last_diff = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a_status ^= a[i];
 
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        b_statis ^= b[i];
    }
 
    for (int i = 0; i < n; i++)
    {
        if (a[i] ^ b[i] == 1)
        {
            last_diff = i;
        }
        
    }
 
    if (last_diff == -1)
    {
        cout << "Tie" << endl;
        return;
    }
 
    if (a_status == b_statis)
    {
        cout << "Tie" << endl;
        return;
    }
 
    if (last_diff % 2 == 0)
    {
        cout << "Ajisai" <<endl; 
    }
    else
    {
        cout << "Mai" << endl;
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