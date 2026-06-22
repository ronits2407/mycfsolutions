#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int n;
    cin >> n;
 
    vector<int> binary_array(n);
 
    for (int i = 0; i < n; i++)
    {
        cin >> binary_array[i];
    }
 
    int current_length = 0;
    int max_length = 0;
    bool state_insite = false;
 
    for (int i = 0; i < n; i++)
    {
        if (binary_array[i] == 0)
        {
            if (state_insite == true)
            {
                current_length++;
            }
            else
            {
                state_insite = true;
                current_length = 1;
                
            }
        }
        else
        {
            if (current_length > max_length)
            {
                max_length = current_length;
            }
            current_length = 0;
            state_insite = false;
            
        }
        
        
    }
 
    if (current_length > max_length)
    {
        max_length = current_length;
    }
    
 
    cout << max_length << endl;
    
    
}
 
int32_t main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--)
    {
        solve();
    }
 
    return 0;
}