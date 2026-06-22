#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
 
    int testcases;
 
    cin >> testcases;
 
    for (int i = 0; i < testcases; i++)
    {
        long long n;
 
        cin >> n;
 
        long long p = n;
 
        int answer = 0;
 
 
        
        while (n != 1)
        {
            
            if (n % 3 != 0)
            {
                answer = -1;
                break;
            }
            else if (n % 6 == 0)
            {
                n /= 6;
                answer++;
            }
            else
            {
                n *= 2;
                answer++;
            }
        }
        cout << answer << endl;
        
    }
 
    return 0;
}