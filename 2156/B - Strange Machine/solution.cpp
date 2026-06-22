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
        int n, q;
        cin >> n >> q;
 
        string machienes_type_clockwise;
        cin >> machienes_type_clockwise;
 
        bool is_B_present = false;
 
        for (int i = 0; i < n; i++)
        {
            if (machienes_type_clockwise[i] == 'B')
            {
                is_B_present = true;
                break;
            }
            
        }
        
 
        while(q--)
        {
            int a;
            cin >> a;
 
            if (is_B_present == false)
            {
                cout << a << endl;
                continue;
            }
            
 
            int current_index = 0;
            int seconds = 0;
 
            while (a != 0)
            {
                if (machienes_type_clockwise[current_index] == 'A')
                {
                    a--;
                }
                else
                {
                    a /= 2;
                }
 
                current_index = (current_index + 1) % n;
                seconds++;
                
            }
 
            cout << seconds << endl;
            
        }
    }
    
 
    return 0;
}