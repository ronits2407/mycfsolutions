#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
 
    int testcases;
 
    cin >> testcases;
 
    for (int testing_index = 0; testing_index < testcases; testing_index++)
    {
        int n, k, lock_count = 0;
        cin >> n >> k;
 
        string binary_string;
        cin >> binary_string;
        int last_one_index = -1;
 
 
        for (int i = 0; i < k - 1; i++)
        {
            if (binary_string[i] == '1')
            {
                if (last_one_index < 0)
                {
                    lock_count++;
                }
                
                last_one_index = i;
            }
            
        }
        
        for (int i = k - 1 ; i < n; i++)
        {
            if (binary_string[i] == '1' && last_one_index <= (i - k))
            {
                lock_count++;
                last_one_index = i;
            }
            else if (binary_string[i] == '1')
            {
                last_one_index = i;
            }
            
 
        
            
        }
 
        cout << lock_count << endl; 
        
    }
    
 
    return 0;
}