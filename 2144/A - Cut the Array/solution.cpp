#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int n;
    cin >> n;
 
    vector<int> a(n);
 
    for(auto& x : a)cin >> x;
 
    int sum = 0;
    for(int x : a) sum+=x;
    if (sum % 3 != 0)
    {
        cout << 0 << ' ' << 0 << endl;
        return;
    }
 
    int l, r;
    int i = 1;
    int sum_middle = 0;
    int sum_end = 0, j = n - 1;
    if (a[0] % 3 == 0)
    {
        sum_end += a[j];
        if (sum_end % 3 == 0)
        {
            cout << 1 << ' '<< j << endl;
            return;  
        }
        
    }
    
    while (1)
    {
        sum_middle += a[i];
        if ((sum_middle % 3) != (a[0] % 3))
        {
            cout << 1 << ' '<< i + 1 <<endl;
            return;   
        }
        
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