#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long int k, n, w;
    cin >> k >> n >> w;
    
    long int result = k * ((w * (w + 1)) / 2) - n; 
    cout << ((result >= 0) ? result: 0);
    return 0;
}