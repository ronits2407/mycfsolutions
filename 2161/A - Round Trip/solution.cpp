#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int R, X, D, n;
    cin >> R >> X >> D >> n;
    
    string rounds;
    cin >> rounds;
 
    int round_participated = 0;
 
    for (char c : rounds)
    {
        if (R >= X)
        {
            if (c == '1')
            {
                R = max(R - D, 0LL);
                round_participated++;
            }
            else
            {
                continue;
            }
        }
        else
        {
            R = max(R - D, 0LL);
            round_participated++;
        }
        
        
    }
 
    cout << round_participated <<endl; 
    
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