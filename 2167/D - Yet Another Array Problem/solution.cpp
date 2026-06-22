#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int n;
    cin >> n;
 
    vector<int> input_array(n);
 
    for (int i = 0; i < n; i++)
    {
        cin >> input_array[i];
    }
 
    int _gcd = input_array[0];
    for (int i = 1; i < n; i++)
    {
        _gcd = gcd(_gcd, input_array[i]);
    }
 
    for (int x = 2; x < 1000000 ; x++)
    {
        if (gcd(x, _gcd) == 1)
        {
            cout << x <<endl;
            return; 
        }
        
    }
 
    cout << -1 << endl;
    return;
    
    
    
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