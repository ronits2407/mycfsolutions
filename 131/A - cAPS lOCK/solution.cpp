#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
 
    string word;
 
    cin >> word;
 
    bool should_change = true;
 
    for (int i = 1; word[i] != '\0'; i++)
    {
        if (islower(word[i]))
        {
            should_change = false;
            break;
        }
        
    }
 
    if (should_change == true)
    {
        for (int i = 1; word[i] != '\0'; i++)
            {
                word[i] = tolower(word[i]);
            }
        if (isupper(word[0]))
        {
            word[0] = tolower(word[0]);
        }
        else
        {
            word[0] = toupper(word[0]);
        }
        
        
    }
 
    cout << word << endl;  
 
    
    
 
    return 0;
}