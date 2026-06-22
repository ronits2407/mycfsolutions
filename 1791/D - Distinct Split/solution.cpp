#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int n;
    cin >> n;
 
    string input_string;
    
    cin >> input_string;
 
    vector<int> no_of_distict_elements_from_left(n, 1);
    vector<int> no_of_distict_elements_from_right(n, 1);
 
    vector<bool> alhabet_left_count(26, false);
    vector<bool> alhabet_right_count(26, false);
 
    alhabet_left_count[input_string[0] - 'a'] = true; 
    
    for (int i = 1; i < n; i++)
    {
        no_of_distict_elements_from_left[i] = no_of_distict_elements_from_left[i - 1];
        
        if (alhabet_left_count[input_string[i] - 'a'] == false)
        {
            no_of_distict_elements_from_left[i]++;
        }
        
        alhabet_left_count[input_string[i] - 'a'] = true;
        
    }
    
    alhabet_right_count[input_string[n - 1] - 'a'] = true;
    
    for (int i = n - 2; i >= 0; i--)
    {
        no_of_distict_elements_from_right[i] = no_of_distict_elements_from_right[i + 1];
        
        if (alhabet_right_count[input_string[i] - 'a'] == false)
        {
            no_of_distict_elements_from_right[i]++;
        }
        
        alhabet_right_count[input_string[i] - 'a'] = true;
        
    }
 
    int max_value = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int current_value = 0;
 
        current_value = no_of_distict_elements_from_left[i] + no_of_distict_elements_from_right[i + 1];
 
        if (current_value > max_value)
        {
            max_value = current_value;
        }
        
    }
    
    cout << max_value <<endl; 
 
    
    
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