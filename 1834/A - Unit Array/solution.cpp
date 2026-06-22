#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int n;
    cin >> n;
 
    int operations = 0;
    int positives = 0;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (temp == 1)
        {
            positives++;
        }
        
    }
 
    operations += max(0LL, (n + 1)/ 2 - positives);
    positives += operations;
 
    if ((n - positives) % 2 == 1)
    {
        operations++;
    }
    
 
    cout << operations << endl;
    
    
    
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