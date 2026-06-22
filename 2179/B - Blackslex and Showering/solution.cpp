#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int n;
    cin >> n;
 
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
 
    int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        sum += abs(a[i] - a[i+1]);
    }
 
    b[0] = abs(a[0] - a[1]);
    b[n-1] = abs(a[n-2]-a[n-1]);
    for (int i = 1; i < n-1; i++)
    {
        b[i] = abs(a[i-1] - a[i]) + abs(a[i] - a[i+1]) - abs(a[i-1] - a[i+1]);
    }
 
    cout << sum - *max_element(b.begin(), b.end()) << endl;
    
    
    
    
    
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