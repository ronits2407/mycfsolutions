#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> laptops(n);
    for(int i = 0; i < n; ++i) {
        cin >> laptops[i].first >> laptops[i].second;
    }
    // Sort laptops by price
    sort(laptops.begin(), laptops.end());
    // If at any point a more expensive laptop has lower quality, output "Happy Alex"
    for(int i = 1; i < n; ++i) {
        if(laptops[i-1].second > laptops[i].second) {
            cout << "Happy Alex" << endl;
            return 0;
        }
    }
    cout << "Poor Alex" << endl;
    return 0;
}