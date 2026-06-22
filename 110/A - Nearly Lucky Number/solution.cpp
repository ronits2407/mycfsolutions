#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
 
    long long n;
    int counter = 0;
    cin >> n;
 
    while (n != 0)
    {
        if (n % 10 == 4 || n % 10 == 7)
        {
            counter++;
        }
        n /= 10;
    }
 
    if (counter == 4 || counter == 7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
    
 
    return 0;
}