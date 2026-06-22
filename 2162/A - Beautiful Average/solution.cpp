#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int n;
    cin >> n;
    vector<int> input(n);
    int maximum = LONG_LONG_MIN;
    for(int i = 0; i < n ; i++  )
    {
        cin >> input[i];
        if (input[i] > maximum)
        {
            maximum = input[i];
        }
        
    }
 
    cout << maximum << endl; 
 
 
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