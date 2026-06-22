#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
 
    int t;
    cin >> t;
 
    for (int i = 0; i < t; i++)
    {
        int angle;
        cin >> angle;
 
        angle = 180 - angle;
        if (360 % angle == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl; 
        }
         
    }
    
 
    return 0;
}