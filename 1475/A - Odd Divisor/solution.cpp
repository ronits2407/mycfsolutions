#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
 
    int test_cases;
    cin >> test_cases;
 
    bool answers[test_cases] = {false};
 
    for (int i = 0; i < test_cases; i++)
    {
        long long n;
        cin >> n;
 
        for (; n != 1 ; n /= 2)
        {
            if (n % 2 == 1)
            {
                answers[i] = true;
                break;
            }
            
        }
        
 
        
    }
 
    for (int i = 0; i < test_cases; i++)
    {
        cout << ((answers[i] == true) ? "YES" :"NO" )<< endl;  
    }
    
    
 
    return 0;
}