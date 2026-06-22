#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
 
    string positions;
    bool state_in = false;
    int notsame = 0;
 
    cin >> positions;
 
    for (int i = 1; positions[i] != '\0'; i++)
    {
        if (positions[i] == positions[i - 1] && state_in == false)
        {
            notsame = 2;
            state_in = true;
        }
        else if (positions[i] == positions[i - 1] && state_in == true)
        {
            notsame++;
            if (notsame >= 7)
            {
                cout << "YES";
                return 0;
            }
            
        }
        else
        {
            notsame = 0;
            state_in = false;
        }
        
        
    }
 
    cout << "NO";
    
 
    return 0;
}