#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    cin >> n;
 
    map<string, int> a;
 
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
 
        if (a.find(x) != a.end())
        {
            cout << x << a[x] << endl;
            a[x]++;
        }
        else
        {
            cout << "OK" << endl;
            a[x] = 1;
        }
        
        
    }
    
 
 
 
    return 0;
}