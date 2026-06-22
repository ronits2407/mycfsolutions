#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int n, k, x;
    cin >> n >> k >> x;
    
    if (k == 1)
    {
        cout << "NO" << endl;
        return;
    }
 
    if (x == 1)
    {
        if (k == 2)
        {
            if (n % 2 == 0)
            {
                cout <<"YES" << endl;
                cout << n / 2 <<endl;
                for (int i = 0; i < n / 2; i++)
                {
                    cout << 2 << ' ';
                }
                cout << endl;
                return;
            }
            else
            {
                cout << "NO" << endl;
                return;
            }
            
        }
        else
        {
            if (n % 2 == 0)
            {
                cout <<"YES" << endl;
                cout << n / 2 <<endl;
                for (int i = 0; i < n / 2; i++)
                {
                    cout << 2 << ' ';
                }
                cout << endl;
                return;
            }
            else
            {
                cout <<"YES" << endl;
                cout << n / 2  <<endl;
                for (int i = 0; i < n / 2 - 1; i++)
                {
                    cout << 2 << ' ';
                }
                cout << 3 <<  endl;
                return;
            }
        }
        
        
        
        
        
    }
    else
    {
        cout <<"YES" << endl;
            cout << n <<endl;
            for (int i = 0; i < n; i++)
            {
                cout << 1 << ' ';
            }
            cout << endl;
            return;
    }
    
    
    
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