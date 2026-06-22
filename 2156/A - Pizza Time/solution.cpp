#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
 
        int hao_pizza_count = 0;
 
        while (n >= 3)
        {
            int  m3;
            m3 = (n / 3);
 
            hao_pizza_count += m3;
            m3 += (n % 3);
            n = m3;
 
        }
 
        cout << hao_pizza_count <<endl; 
        
    }
     
 
    return 0;
}