#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int a, b, n;
    cin >> a >> b >> n;
 
    int minimum = 0;
    int first = 0;
    while (1)
    {
        // check what is the length
        if(b <= (double) a / n)
        {
                if (b != a)
                {
                    minimum++;
                }
 
                else if (first == 0)
                {
                    minimum++;
                }
                
 
                break;
 
 
        }
        else
        {
            // if length is a / m close the rightmost tab
                // if closing for first time add an additional one
                if (first == 0)
                {
                    minimum++;
                    first = 1;
                }
                
 
                // just close the tab no movements required
                n = ceil(((double ) a / b )- 1);
        }   
    }
        
 
       
 
        
 
    cout << minimum << endl;
    
    
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