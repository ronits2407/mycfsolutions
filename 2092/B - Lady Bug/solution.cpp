#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int n;
    cin >> n;
    string a, b;
    int zero_count_a0 = 0, zero_count_b0 = 0;
    cin >> a;
    cin >> b;
    
    int i;
    for (i = 0; i < n - 1; i+=2)
    {
        if (a[i] == '0')
        {
            zero_count_a0++;
        }
 
        if (b[i + 1] == '0')
        {
            zero_count_a0++;
        }
        
        if (b[i] == '0')
        {
            zero_count_b0++;
        }
 
        if (a[i + 1] == '0')
        {
            zero_count_b0++;
        }
        
    }
 
    if (n % 2 == 1)
    {
        if (a[n - 1] == '0')
        {
            zero_count_a0++;
        }
 
        if (b[n - 1] == '0')
        {
            zero_count_b0++;
        }
        
        
    }
    
    if (zero_count_a0 >= ((n + 1)/ 2) && zero_count_b0 >= ((n)/2 ))
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