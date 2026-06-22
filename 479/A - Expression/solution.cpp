#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
 
    int A[3], counter = 0;
    cin >> A[0] >> A[1] >> A[2];
 
    int max = A[0] + A[1] + A[2];
   if (A[0] * A[1] * A[2] > max )
   {
    max = A[0] * A[1] * A[2];
   }
   if (A[0] + A[1] * A[2] > max)
   {
    max =  A[0] + A[1] * A[2];
   }
   if (A[0] * A[1] + A[2] > max)
   {
    max =  A[0] * A[1] + A[2];
   }
   if (A[0] * (A[1] + A[2]) > max)
   {
    max =  A[0] *( A[1] + A[2]);
   }
   if ((A[0] + A[1]) * A[2] > max)
   {
    max = ( A[0] + A[1]) * A[2];
   }
 
   cout << max << endl;
   
   
    
 
    return 0;
}