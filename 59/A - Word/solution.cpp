#include <bits/stdc++.h>
using namespace std;
 
int main(int argc, char const *argv[])
{
    string word;
    int uppercase = 0, lowercase = 0;
 
    cin >> word;
 
    for (char c: word)
    {
        if (islower(c))
        {
            lowercase++;
        }
        else
        {
            uppercase++;
 
        }
        
        
    }
 
    if (uppercase > lowercase)
    {
        for (char &c: word)
        {
            c = toupper(c);
        }
        
    }
    else
    {
        for(char &c : word)
        {
            c = tolower(c);
        }
    }
 
    cout << word;
    
    
    
    return 0;
}