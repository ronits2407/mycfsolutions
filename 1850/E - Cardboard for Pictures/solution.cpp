#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int n, c;
    cin >> n >> c;
 
    int first = n * 4, second = 0, third = 0;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        third += a[i] * a[i];
        second += a[i];
    }
 
    third -= c;
    second *= 4;
 
    cout << ((int)round(sqrt((long double)second * (long double)second - 4 * (long double)first * (long double)third)) - second) / (2 * first) << endl;
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