#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
 
    int n;
    cin >> n;
    int columns[n];
 
    for (int i = 0; i < n; i++)
    {
        cin >> columns[i];
    }
 
    sort(columns, columns + n);
 
    for (int i = 0; i < n; i++)
    {
        cout << columns[i] << " ";
    }
    
    
 
 
    return 0;
}