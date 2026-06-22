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
 
        int max_score = 0, current_score = 0;
 
        vector<int> chrismas_tree_array(n);
        vector<bool> is_in_path(n, false);
 
        for (int i = 0; i < n; i++)
        {
            cin >> chrismas_tree_array[i];
        }
 
        for (int i = 0; i < n; i++)
        {
            current_score = 0;
 
            if (is_in_path[i] == true)
            {
                continue;
            }
 
            int current_index = i;
 
            while (current_index < n)
            {
                if (is_in_path[current_index] == true)
                {
                    break;
                }
                
                current_score += chrismas_tree_array[current_index];
                is_in_path[current_index] = true;
                current_index += chrismas_tree_array[current_index];
            }
            
            if (current_score > max_score)
            {
                max_score = current_score;
            }
            
            
        }
 
        cout << max_score << endl;
        
        
    }
    
 
    return 0;
}