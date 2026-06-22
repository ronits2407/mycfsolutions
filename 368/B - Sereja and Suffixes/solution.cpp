#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
 
    int n, m;
    cin >> n >>m;
    
    vector<int> array_of_numbers(n);
    vector<int> cumulitive_arry_of_disticnt_element_count(n);
    vector<int> numbercount(100000, 0);
 
    for (int i = 0; i < n; i++)
    {
        cin >> array_of_numbers[i];
    }
 
    cumulitive_arry_of_disticnt_element_count[n - 1] = 1;
    numbercount[array_of_numbers[n - 1] - 1]++;
 
    for (int i = n - 2; i >= 0; i--)
    {
        if (numbercount[array_of_numbers[i] - 1] == 0)
        {
            cumulitive_arry_of_disticnt_element_count[i] = cumulitive_arry_of_disticnt_element_count[i +1 ] + 1 ;
        }
        else
        {
            cumulitive_arry_of_disticnt_element_count[i] = cumulitive_arry_of_disticnt_element_count[i +1 ];
        }
 
        numbercount[array_of_numbers[i] - 1]++;
    }
 
    for (int i = 0; i < m; i++)
    {
        int temp;
        cin >> temp;
 
        cout << cumulitive_arry_of_disticnt_element_count[temp - 1] <<endl ; 
 
    }
    
    
    
 
    return 0;
}