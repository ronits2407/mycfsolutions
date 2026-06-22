#include <bits/stdc++.h>
using namespace std;
#define int long long
 
 
int is_cube(int x)
{
    int low = 1;
    int high = (x + 2)/ 3;
 
    while (low < high)
    {
        int mid = (low + high) /2 ;
 
        if ((__int128)mid * mid * mid < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }
 
    if (low <= ( x +2)/ 3 && (__int128)low * low * low == x)
    {
        return 1;
    }
    
 
    return 0;
    
    
}
 
int32_t main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
 
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int n;
        cin >> n;
 
        for (int i = 1; (i * i * i ) < n; i++)
        {
           if (is_cube(n - (i * i * i)))
           {
            cout << "YES"<< endl; 
            goto bottom;
           }
           
        }
        cout << "NO" <<endl ;
        
        bottom:
    }
    
 
    return 0;
}