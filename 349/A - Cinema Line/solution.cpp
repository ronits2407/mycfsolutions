#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    cin >> n;
 
    vector<int> _queue(n);
 
    int count_25 = 0, count_50 = 0;
    
 
    for (int i = 0; i < n; i++)
    {
        cin >> _queue[i];
    }
 
    for (int i = 0; i < n; i++)
    {
        if (_queue[i] == 50)
        {
            if (count_25)
            {
                count_25--;
            }
            else
            {
                cout << "NO" << endl;
                goto bottom;
            }
            count_50++;
        }
        else if (_queue[i] == 100)
        {
            if (count_25 >= 1 && count_50 >= 1)
            {
                count_25--;
                count_50--;
            }
            else if (count_25 >= 3)
            {
                count_25 -= 3;
            }
            else
            {
                cout << "NO" << endl;
                goto bottom;
            }
            
            
            
        }
        else
        {
            count_25++;
        }
        
        
        
    }
 
    cout << "YES" << endl;
 
    bottom:
    
 
 
    
 
    return 0;
}