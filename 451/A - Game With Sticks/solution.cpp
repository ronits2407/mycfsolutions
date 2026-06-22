#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
 
    int n, m;
    cin >> n >> m;
 
    n = ((n > m) ?m:n); 
 
    cout << ((n % 2 == 0) ? "Malvika": "Akshat");
    
 
    return 0;
}