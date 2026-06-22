#include <bits/stdc++.h>
using namespace std;
#define int long long
 
 
bool check_magic(int n)
{
    bool is_magic = true;
 
    for (int i = n; i != 0 ; i /= 10)
    {
        if (i % 10 != 4 && i % 10 != 7)
        {
            is_magic = false;
            break;
        }
        
    }
 
    return is_magic;
}
 
bool check_divisor(int n, int pre)
{
    if ((pre < n) && (n % (pre + 4) == 0 || n % (pre + 7) == 0 ))
    {
        return true;
    }
    else if (pre >= n)
    {
        return false;
    }
    else if (check_divisor(n, (pre + 4) * 10))
    {
        return true;
    }
    else if(check_divisor(n, (pre + 7) * 10))
    {
        return true;
    }
    
    return false;
}
 
int32_t main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
 
    int n;
    cin >> n;
 
    if ( check_magic(n) == true)
    {
        cout << "YES" << endl;
        return 0;
    }
 
    
    if (check_divisor(n, 0))
    {
        cout << "YES" <<endl; 
        return 0;
    }
    else
    {
        cout << "NO" << endl; 
    }
    
    
    
    
 
    return 0;
}