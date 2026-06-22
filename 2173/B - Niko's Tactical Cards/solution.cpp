#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int n;
        cin >> n;
 
        vector<long long> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
 
            cin >> a[i];
        }
 
        for (int i = 0; i < n; i++)
        {
             cin >> b[i];
        }
 
        int L = 0, U = 0; 
        for (int i = 0; i < n; i++) {
            int newL = min(L - a[i], b[i] - U);
            int newU = max(U - a[i], b[i] - L);
            L = newL;
            U = newU;
        }
        cout << U << endl;
    
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