#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
 
    sort(a, a + 3);
 
    if (a[2] - a[0] >= 10)
    {
        cout <<"check again" << endl; 
    }
    else
    {
        cout << "final " << a[1] << endl;
    }
    
    
 
    
    
 
    return 0;
}