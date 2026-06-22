#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int comb(int x)
{
    int numerator = 1;
    for (int i = x; i > (x - 2); i--)
    {
        numerator *= i;
    }
    return numerator / 2;
    
}
 
int32_t main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
 
    int max = *max_element(a.begin(), a.end());
    int count_ = count(a.begin(), a.end(), max);
 
    int min = *min_element(a.begin(), a.end());
    int count_2 = count(a.begin(), a.end(), min);
    if (max == min)
    {
        cout << 0 << ' ' << comb(count_) << endl;
        return 0;
    }
    
 
    cout << max - min << ' ' << count_ * count_2 << endl;
     
 
    return 0;
}