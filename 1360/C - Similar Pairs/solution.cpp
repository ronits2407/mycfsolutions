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
 
        vector<int> numbers(n);
 
        int even_count = 0, odd_count = 0;
 
        for (int i = 0; i < n; i++)
        {
            cin >> numbers[i];
 
            if (numbers[i] % 2 == 1)
            {
                odd_count++;
            }
            else
            {
                even_count++;
            }
        }
 
        if (even_count % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            sort(numbers.begin(), numbers.end());
            for (int i = 0; i < n - 1; i++)
            {
                if (numbers[i] + 1 == numbers[i + 1])
                {
                    cout << "YES" << endl;
                    goto bottom;
                }
            }
            
            cout << "NO" << endl;
 
            bottom:
        }
        
        
        
    }
    
 
    return 0;
}