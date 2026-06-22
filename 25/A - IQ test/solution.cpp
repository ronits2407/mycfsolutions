#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    cin >> n;
 
    vector<int> A(n);
    int even = 0;
    int even_number;
    int odd_number;
 
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        if (A[i] % 2 == 0)
        {
            even++;
            even_number = i + 1;
        }
        else
        {
            odd_number = i + 1;
        }
        
        
    }
 
    if (even >= 2)
    {
        cout << odd_number << endl;
    }
    else
    {
        cout << even_number << endl;
    }
    
 
 
    
    
 
    return 0;
}