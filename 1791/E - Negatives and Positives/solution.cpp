#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int magnitude(int x)
{
    if (x < 0)
    {
        return -x;
    }
 
    return x;
    
}
 
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
 
        vector<int> array_of_elements(n);
 
        int sum = 0;
        int negative_count = 0;
        int minimum_element = 1e9;
 
        for (int i = 0; i < n; i++)
        {
            cin >>array_of_elements[i]; 
            if (array_of_elements[i] < 0)
            {
                sum += -1 * array_of_elements[i];
                array_of_elements[i] = -1 * array_of_elements[i];
                negative_count++;
            }
            else
            {
                sum += array_of_elements[i];
            }
 
            if (array_of_elements[i] < minimum_element)
            {
                minimum_element = array_of_elements[i];
            }
            
        }
 
        if (negative_count % 2 == 1)
        {
            sum -= 2 * minimum_element;
        }
 
        cout << sum << endl;
        
        
        
        
        
        
        
    }
    
 
    return 0;
}