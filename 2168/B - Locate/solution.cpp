#include <bits/stdc++.h>
using namespace std;
#define int long long
 
 
void part_A()
{
    int n;
    cin >> n;
 
    vector<int> a(n);
 
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
 
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            cout << 0 << endl;
            return;
        }
 
        if (a[i] == n)
        {
            cout << 1 << endl;
            return;
        }
        
        
    }
    
    
}
 
 
void part_B()
{
 
    int n, x;
    cin >> n >> x;
 
    if (x == 0)
    {
        int l = 1, r = n;
        int move_factor = n / 2;
 
        while (true)
        {
            cout << "? " << l << ' ' << r << endl;
 
            int answer;
            cin >> answer;
 
            if (answer == n - 1 && move_factor!= 0)
            {
                r -= move_factor;
                move_factor = move_factor / 2;
                continue;
            }
            if (answer == n - 1 && move_factor == 0)
            {
                cout << "? " << l << ' ' << r - 1<< endl;
                cin >> answer;
 
                if (answer == n  - 1)
                {
                    r -= 1;
                    continue;
                }
                
                cout << "! "<< r << endl;
                return;
            }
            else
            {
                r += max(move_factor, 1LL);
                move_factor = move_factor / 2;
                continue;
 
            }    
        }
    }
    else
    {
        int l = 1, r = n;
        int move_factor = n / 2;
 
        while (true)
        {
            cout << "? " << l << ' ' << r << endl;
 
            int answer;
            cin >> answer;
 
            if (answer == n - 1 && move_factor!= 0)
            {
                l += move_factor;
                move_factor = move_factor / 2;
                continue;
            }
            if (answer == n - 1 && move_factor == 0)
            {
                cout << "? " << l + 1 << ' ' << r << endl;
                cin >> answer;
 
                if (answer == n  - 1)
                {
                    l += 1;
                    continue;
                }
 
                cout << "! "<< l << endl;
                return;
            }
            else
            {
                l -= max(move_factor, 1LL);
                move_factor = move_factor / 2;
                continue;
 
            }    
        }
    }
    
    
 
    
    
}
 
 
int32_t main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    string type;
    cin >> type;
    int t;
    cin >> t;
 
    if (type[0] == 'f')
    {
        while(t--)
        {
            part_A();
        }
    }
    else
    {
        while (t--)
        {
            part_B();
        }
        
    }
    
    
 
    return 0;
}