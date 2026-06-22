#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
 
    char first_line[101];
    cin >> first_line;
 
    int length1 = strlen(first_line);
    
    char second_line[101];
    cin >> second_line;
    
    int length2 = strlen(second_line);
 
    if (length1 != length2)
    {
        cout << "NO";
        return 0;
    }
    
 
    for (int i = 0; first_line[i] != '\0'; i++)
    {
        if (first_line[i] != second_line[length1  - 1 - i])
        {
            cout << "NO";
            return 0;
        }
        
    }
 
    cout << "YES";
    return 0;
}