#include <bits/stdc++.h>
using namespace std;
 
const int MAX_COLOUR = 100000;
 
// Computes sum of pairwise absolute differences for values in v
// Idea: sort in non-increasing order, then sum_{i} v[i] * (n-1 - 2*i)
// This equals sum_{i<j} (v[i] - v[j]) which is the sum of |differences| after sorting
long long calculateSumOfAllPairs(vector<int>& v) {
		sort(v.begin(), v.end(), greater<>()); // ensure v[i] >= v[j] for i < j
		int n = v.size();
 
		long long sum = 0;
 
		// j runs as: n-1, n-3, ..., -(n-1), matching coefficients (n-1 - 2*i)
		for (int i = 0, j = n - 1; i < n; i++, j -= 2) {
				sum += 1LL * j * v[i];
		}
 
		return sum;
}
 
int main() {
		ios::sync_with_stdio(false);
		cin.tie(nullptr);
 
		int n, m;
		cin >> n >> m;
 
		int a[n][m];
		for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++) {
						cin >> a[i][j];
						a[i][j]--; // convert colors to 0-based to index into vectors directly
				}
		}
 
		vector<vector<int>> x(MAX_COLOUR); // rows grouped by color
		vector<vector<int>> y(MAX_COLOUR); // cols grouped by color
 
		for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++) {
						// For each color, store its row and column indices separately
						x[a[i][j]].push_back(i);
						y[a[i][j]].push_back(j);
				}
		}
 
		long long ans = 0;
 
		for (int colour = 0; colour < MAX_COLOUR; colour++) {
				// Manhattan distance splits into |row diff| + |col diff|; sum them independently
				ans += calculateSumOfAllPairs(x[colour]);
				ans += calculateSumOfAllPairs(y[colour]);
		}
 
		cout << ans;
 
		/*
		Time Complexity (TC): O(nm * log(nm))
		Space Complexity (SC): O(n * m)
		*/
}