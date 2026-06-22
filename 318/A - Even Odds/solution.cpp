#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
 
    long long n, k;
    cin >> n >> k;
 
    if (k <= ((n + 1) / 2))
    {
        cout << (2* k) - 1;
    }
    else
    {
        k -= (n + 1) / 2;
        cout << 2 * k;
    }
    
    
 
    return 0;
}