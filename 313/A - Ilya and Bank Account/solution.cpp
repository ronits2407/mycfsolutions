#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
 
    int n;
    cin >> n;
 
    if (n < 0)
    {
        n *= -1;
        int p = (n / 10) % 10;
        int q = n % 10;
 
        if (p > q)
        {
            n /= 100;
            n = n * 10 + q;
        }
        else
        {
            n /= 10;
        }
        
        cout << -n;
        return 0;
        
    }
    
    cout << n;
     
    
 
    return 0;
}