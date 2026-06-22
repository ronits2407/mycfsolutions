#include <iostream>
#include <vector>
#include <string>
#include <cstddef>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <cctype>
#include <set>
#include <string>
#include <unordered_set>
#include <climits>
#include <numeric>
#include <map>
 
using namespace std;
 
int main()
{
    int a, b;
    cin >> a >> b;
    int count = 0;
 
    while (a >= b)
    {
        count += b;
        a = a - b + 1;
    }
    count += a;
    cout << count << endl;
    return 0;
}