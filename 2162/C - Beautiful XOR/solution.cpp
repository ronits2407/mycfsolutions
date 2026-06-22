#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int a, b;
    cin >>a >> b;
    int num_requirement = 1;
 
 
    if (a == b)
    {
        cout << 0 <<endl;
        return; 
    }
    
    int num_digits_a = (int)(log2(a) + 1LL);
    int num_digits_b = (int)(log2(b) + 1LL);
    
    if (num_digits_a < num_digits_b)
    {
        cout << -1 << endl;
        return;
    }
    
    int num1 = ~0;
    num1 = num1 << num_digits_b;
    num1 = ~num1;
 
    num1 = num1 & a;
 
    num1 = num1 ^ b;
    int num2 = a;
    
    if (num_digits_a > num_digits_b)
    {
        num_requirement++;
        num2 = num2 >> num_digits_b;
        num2 = num2 << num_digits_b;
    }
 
    cout << num_requirement <<endl;
    cout << num1 << ' ';
    if (num_requirement == 2)
    {
        cout << num2;
    }
 
    cout <<endl; 
      
    
    
}
 
int32_t main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--)
    {
        solve();
    }
 
    return 0;
}