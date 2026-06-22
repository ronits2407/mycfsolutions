#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
 
    int testcases;
 
    cin >> testcases;
 
    for (int test_case_index = 0; test_case_index < testcases; test_case_index++)
    {
        int n;
        cin >> n;
 
        int awesome_array[n];
        cin >>awesome_array[0];
        cin >> awesome_array[1];
        
        if (awesome_array[0] > awesome_array[1] )
        {
            awesome_array[1] = awesome_array[0];
        }
        
 
        for (int i = 2; i < n - 1; i+= 2)
        {
            cin >> awesome_array[i];
            cin >> awesome_array[i + 1];
            if (awesome_array[i + 1] < awesome_array[i - 1])
            {
                awesome_array[i + 1] = awesome_array[i - 1];
            }
 
            if (awesome_array[i + 1] < awesome_array[i])
            {
                awesome_array[i + 1] = awesome_array[i];
            }
            
            
        }
 
        if (n % 2 == 1)
        {
            cin >> awesome_array[n - 1];
             
        }
 
        int no_of_operations = 0;
       for (int i = 0; i < n - 1; i++)
       {
        if (i % 2 == 0)
        {
            if (awesome_array[i] >= awesome_array[i +1 ])
            {
                no_of_operations += (awesome_array[i] - awesome_array[i + 1] + 1);
            }
            
        }
        else
        {
            if (awesome_array[i] <= awesome_array[i +1 ])
            {
                no_of_operations += (awesome_array[i + 1] - awesome_array[i] + 1);
                awesome_array[i + 1] = awesome_array[i] - 1;
            }
            
        }
        
        
       }
 
       cout << no_of_operations << endl;
       
        
        
        
    }
    
 
    return 0;
}