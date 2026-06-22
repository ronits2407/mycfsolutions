#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    string input;
    cin >> input;
 
    int n = input.size();
    vector<int> prefix(n, 0);
 
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + (input[i] == input[i - 1]);
    }
 
    int m;
    cin >> m;
 
    while (m--) {
        int l, r;
        cin >> l >> r;
        cout << prefix[r - 1] - prefix[l - 1] << "
";
    }
 
    return 0;
}