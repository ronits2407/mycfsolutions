    #include <bits/stdc++.h>
    using namespace std;
    #define int long long
 
    int32_t main()
    {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(NULL);
        
        int n;
        cin >> n;
 
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
 
        bool inside_decreasing = false;
        int counter = 0;
 
        if (n == 1)
        {
            cout << "yes" <<endl << 1 << ' ' << 1 << endl;
            return 0; 
        }
        
 
        int left_index = 1, right_index = n;
        for (int i = 1; i < n; i++)
        {
            if (a[i] > a[i - 1])
            {
                // if this is the first increasing after a decreasing array
                if (inside_decreasing == true)
                {
                    inside_decreasing = false;
                    right_index = i;
                }
                
            }
            else
            {
                // if this is the first decreasing
                if (inside_decreasing == false)
                {
                    inside_decreasing = true;
                    left_index = i;
                    counter++;
                }
                
            }
            
            
        }
 
        if (left_index > 1)
        {
            if (a[left_index - 2] > a[right_index -1])
            {
                cout << "no" << endl;
                return 0;
            }
            
        }
        if (right_index < n)
        {
            if (a[left_index - 1] > a[right_index])
            {
                cout << "no" << endl;
                return 0;
            }
            
        }
        
        
        
 
        if (counter == 0)
        {
            cout << "yes" <<endl << 1 << ' ' << 1 << endl;
        }
        else if (counter == 1)
        {
            cout << "yes" <<endl << left_index << ' ' << right_index << endl;
        }
        else
        {
            cout << "no" << endl;
        }
        
        
        
        
        
        
 
        return 0;
    }