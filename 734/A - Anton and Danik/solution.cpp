#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
 
    long long n, anton = 0, Danik = 0;
 
    cin >> n;
    string games_won;
 
    cin >> games_won;
 
    for (char c: games_won)
    {
        if (c == 'A')
        {
            anton++;            
        }
        else if (c == 'D')
        {
            Danik++;
        }
        
        
    }
 
    if (anton > Danik)
    {
        cout << "Anton";
    }
    else if (anton == Danik)
    {
        cout << "Friendship";
    }
    else
    {
        cout << "Danik";
    }
    
    
 
    return 0;
}