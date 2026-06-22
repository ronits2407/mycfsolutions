#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
 
    int g;
    cin >> g;
 
    int no_of_groups_containing_certain_number_of_people[4], taxi_count = 0;
 
    for (int i = 0; i < 4; i++)
    {
        no_of_groups_containing_certain_number_of_people[i] = 0;
    }
    
 
    for (int i = 0; i < g; i++)
    {
        int temp;
        cin >> temp;
        no_of_groups_containing_certain_number_of_people[temp - 1]++;
    }
 
    taxi_count += no_of_groups_containing_certain_number_of_people[3] +no_of_groups_containing_certain_number_of_people[2] + no_of_groups_containing_certain_number_of_people[1] / 2 ;
 
    no_of_groups_containing_certain_number_of_people[1] %= 2;
 
    if((no_of_groups_containing_certain_number_of_people[0] >= no_of_groups_containing_certain_number_of_people[2]))
    {
        no_of_groups_containing_certain_number_of_people[0] =  no_of_groups_containing_certain_number_of_people[0] - no_of_groups_containing_certain_number_of_people[2];
    }
    else
    {
        no_of_groups_containing_certain_number_of_people[0] = 0;
    }
 
    taxi_count += (no_of_groups_containing_certain_number_of_people[1]);
    
    if (no_of_groups_containing_certain_number_of_people[0] > 2 && no_of_groups_containing_certain_number_of_people[1])
    {
            no_of_groups_containing_certain_number_of_people[0] -= 2;
            taxi_count += (no_of_groups_containing_certain_number_of_people[0] + 3 )/ 4; 
    }
    else if (no_of_groups_containing_certain_number_of_people[0] && !(no_of_groups_containing_certain_number_of_people[1]))
    {
            taxi_count += (no_of_groups_containing_certain_number_of_people[0] + 3) / 4; 
    }
    
    cout << taxi_count; 
    
 
    return 0;
}