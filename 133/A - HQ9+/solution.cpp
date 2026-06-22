#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
 
    string input;
 
    cin >> input;
 
    for (int i = 0; input[i] != '\0'; i++)
    {
        if (input[i] ==  'H' || input[i] == 'Q' || input[i] == '9')
        {
            cout << "YES";
            return 0;
        }
        
    }
 
    
    cout << "NO";
    return 0;
}