#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    cin >> n;
    string names[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
 
    if (n <= 5)
    {
        cout << names[n - 1] << endl;
 
        return 0;
    }
    int x = ceil(log2(n / 5.0 + 1) - 1);
 
    n = (n - (((int)pow(2, x) - 1) * 5));
 
    if (n == 5 * (int)pow(2, x + 1))
    {
        cout << names[4] << endl;
        return 0;
    }
    
 
    n = (n - 1) / (int)pow(2, x);
    
 
    cout << names[n] << endl;
    
 
    return 0;
}