#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
 
    string song;
    bool wub_entered = false;
    bool in_middle = false;
    cin >> song;
 
    for (int i = 0; song[i] != '\0'; i++)
    {
        if (song[i] == 'W' && song[i + 1] == 'U' && song[i + 2] == 'B' && in_middle == true)
        {
            if (wub_entered == false)
            {
                wub_entered = true;
                cout << ' '; 
            }
            i += 2;
        }
        else if (song[i] == 'W' && song[i + 1] == 'U' && song[i + 2] == 'B' && in_middle == false)
        {
            i += 2;
        }
        else
        {
            in_middle = true;
            wub_entered = false;
            cout << song[i];
        }
        
        
    }
    
 
    return 0;
}