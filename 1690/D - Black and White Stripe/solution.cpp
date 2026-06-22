#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> white(n + 1);
        for (int i = 1; i <= n; i++)
        {
            if (s[i - 1] == 'W')
            {
                white[i]++;
            }
        }
 
        for (int i = 1; i <= n; i++)
        {
            white[i] += white[i - 1];
        }
 
        int ans = INT_MAX;
        int left = 1, right = k;
        while (right <= n)
        {
            int nw = white[right] - white[left - 1];
            ans = min(nw, ans);
            left++;
            right++;
        }
        cout << ans << endl;
    }
}