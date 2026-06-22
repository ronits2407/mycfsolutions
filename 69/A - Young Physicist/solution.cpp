#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
 
    int n;
    cin >> n;
 
    int result[3] = {0, 0, 0};
 
    for (int i = 0; i < n; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
 
        result[0] += x;
        result[1] += y;
        result[2] += z;
    }
 
    if (result[0] == 0 && result[1] == 0 && result [2] == 0)
    {
        cout  << "YES";
    }
    else
    {
        cout << "NO";
    }
    
    
    
 
    return 0;
}