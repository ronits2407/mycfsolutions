#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
 
    int testcases;
    cin >>testcases;
    
    for (int testing = 0; testing < testcases; testing++)
    {
        int n, k;
 
        cin >> n >>k;
        if (k *k <= n && (n - k * k) % 2 == 0)
        {
            cout << "YES" <<endl ; 
        }
        else
        {
            cout <<"NO" <<endl;  
        }
        
         
    }
    
 
    return 0;
}