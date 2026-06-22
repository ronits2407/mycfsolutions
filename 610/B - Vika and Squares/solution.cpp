#include <bits/stdc++.h>
using namespace std;
#define int long long
 
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
 
    int min_ = *min_element(a.begin(), a.end());
 
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i] == min_)
        {
            break;
        }
        else
        {
            a.push_back(a[i]);
        }
        
        
    }
 
 
    int gap = 0, max_gap = 0;
    for (; i < a.size(); i++)
    {
        if (a[i] == min_)
        {
            max_gap = max(max_gap, gap);
            gap = 0;
        }
        else
        {
            gap++;
        }
        
        
    }
    max_gap = max(max_gap, gap);
 
    cout << min_ * n + max_gap << endl;
    
    
    
 
    return 0;
}