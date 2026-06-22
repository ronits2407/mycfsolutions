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
 
        vector<int> candle_weights(n);
 
        for (int i = 0; i < n; i++)
        {
            cin >> candle_weights[i];
        }
 
        if (n == 1)
        {
            cout << 0 <<endl;
            continue; 
        }
        
 
        vector<int> cumulitive_sum_from_left(n);
        vector<int> cumulitive_sum_from_right(n);
 
        cumulitive_sum_from_left[0] = candle_weights[0];
        cumulitive_sum_from_right[0] = candle_weights[n - 1];
 
        for (int i = 1; i < n; i++)
        {
            cumulitive_sum_from_left[i] = cumulitive_sum_from_left[ i - 1] + candle_weights[i];
            cumulitive_sum_from_right[i] = cumulitive_sum_from_right[i - 1] + candle_weights[n - 1 - i];
        }
 
        for (int i = cumulitive_sum_from_left.size() - 2, k = 1; i >= 0; i--, k++)
        {
            if (binary_search(cumulitive_sum_from_right.begin(), cumulitive_sum_from_right.begin() + k, cumulitive_sum_from_left[i]))
            {
                cout << i+ 2 + (lower_bound(cumulitive_sum_from_right.begin(), cumulitive_sum_from_right.begin() + k, cumulitive_sum_from_left[i]) - cumulitive_sum_from_right.begin()) << endl;
                goto bottom;
            }
            
        }
        
        cout << 0 << endl;
        bottom:
        
        
        
    }
    
 
    return 0;
}