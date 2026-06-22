#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int n;
    cin >> n;
 
    vector<int> a(n);
    int a_xor = 0;
    vector<int> b(n);
    int b_xor = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a_xor ^= a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        b_xor ^= b[i];
    }
    
 
    for (int i = 0; i < n; i++)
    {
        // calculate increment for both if switched
        int temp = a_xor;
        temp ^= a[i];
        temp ^= b[i];
        int diff_A = temp - a_xor;
 
        temp = b_xor;
        temp ^= b[i];
        temp ^= a[i];
        int diff_B = temp - b_xor;
 
        if ((i % 2 == 0 && diff_A > diff_B) || (i % 2 == 1 && diff_B > diff_A))
        {
            a_xor ^= a[i];
            a_xor ^= b[i];
 
            b_xor = temp;
        }
        
        
    }
 
    if (a_xor > b_xor)
    {
        cout << "Ajisai" << endl;
    }
    else if (a_xor < b_xor)
    {
        cout << "Mai" <<endl; 
    }
    else
    {
        cout << "Tie" << endl; 
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