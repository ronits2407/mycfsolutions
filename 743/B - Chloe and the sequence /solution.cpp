#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, k;
    cin >> n >> k;
 
    int count = 0;
 
    while (k % 2 == 0)
    {
        count++;
        k /= 2;
    }
 
    cout << count + 1;
    
 
    return 0;
}