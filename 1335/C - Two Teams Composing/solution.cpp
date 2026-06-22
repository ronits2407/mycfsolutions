#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
 
    int testcases;
    cin >>testcases;
    
    while (testcases--)
    {
        int n;
        cin >>n;
 
        vector<int> input_numbers(n);
        for (int i = 0; i < n; i++)
        {
            cin >> input_numbers[i];
        }
 
        sort(input_numbers.begin(), input_numbers.end());
        
        vector<int> counting_array(n + 1, 1);
 
        int j = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (input_numbers[i] == input_numbers[i + 1])
            {
                counting_array[j]++;
            }
            else
            {
                j++;
            }   
        }
        counting_array[++j] = -1;
 
        int max_element = 0;
 
        for (int i = 0; counting_array[i] != -1; i++)
        {
            if (counting_array[i] > max_element )
            {
                max_element = counting_array[i];
            }
        }
 
        if (max_element > j - 1)
        {
            if (max_element == j)
            {
                cout << j - 1; 
            }
            else
            {
                cout << j;
            }
        }
        else if (max_element == j - 1)
        {
            cout << j - 1;
        }
        else
        {
            cout << max_element;
        }
        
        cout << endl;
        
        
 
 
        
        
    }
    
    
 
    return 0;
}