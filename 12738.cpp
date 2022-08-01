#include<bits/stdc++.h>
using namespace std;

int n, ans;
int main() {
	cin.tie(0);
	cin >> n;
	vector<int>v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	vector<int>LIS;
	LIS.emplace_back(v[0]);
	for (int i = 1; i < n; i++) {
		if (LIS.back()> v[i]) {
			LIS[lower_bound(LIS.begin(), LIS.end(), v[i])-LIS.begin()] = v[i];
		}
		else if (LIS.back() < v[i]) {
			LIS.emplace_back(v[i]);
		}
	}
	
	cout << LIS.size();
	return 0;
}