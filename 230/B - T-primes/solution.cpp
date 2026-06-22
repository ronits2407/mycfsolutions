#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int n;
    cin >> n;
 
    if (n == 1)
    {
        cout << "NO" << endl;
        return; 
    }
    
 
    int prime = (int) sqrt(n);
    if (prime * prime == n)
    {
        // check if prime is prime
 
        for (int i = 2; i * i <= prime; i++)
        {
            if (prime % i == 0)
            {
                cout << "NO" << endl;
                return;
            }
            
        }
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