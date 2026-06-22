#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int n, a;
    cin >> n >> a;
 
    vector<int> marbles(n);
    int grater_than = 0;
    int less_than = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> marbles[i];
        if (marbles[i] > a )
        {
            grater_than++;
        }
        else if (marbles[i] < a)
        {
            less_than++;
        }
        
        
    }
 
    if (grater_than > less_than)
    {
        cout << a + 1 << endl; 
    }
    else
    {
        cout << a - 1 << endl;
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