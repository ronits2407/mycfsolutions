#include <bits/stdc++.h>
using namespace std;
#define int long long
#define double long double
 
void solve()
{
    int n, d, h;
    cin >> n >> d >> h;
 
    vector<int> base_h(n);
    for (int i = 0; i < n; i++)
    {
        cin >> base_h[i];
    }
 
    sort(base_h.begin(), base_h.end());
 
    double area = 0.5 * d * h;
    for (int i = 0; i < n - 1; i++)
    {
        if (base_h[i] + h > base_h[i+1])
        {
            area += 0.5 * (base_h[i+1] - base_h[i]) * (d * (1 - (base_h[i+1] - base_h[i]) / (double)h) + d);
 
        }
        else
        {
            area += 0.5 * d * h;
        }
        
        
    }
 
    cout << area << endl;
 
    
 
    
}
 
int32_t main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int t;
    cin >> t;
 
    cout << fixed << setprecision(20);
    
    while(t--)
    {
        solve();
    }
 
    return 0;
}