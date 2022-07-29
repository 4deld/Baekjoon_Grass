#include<bits/stdc++.h>
using namespace std;
int n, ans;
int main() {
	cin.tie(0);
	cin >> n;
	vector<int>v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	sort(v.begin(), v.end());
	for (int i = n; i > 0; i--)
		ans = ans > i * v[n - i] ? ans : i * v[n - i];
	cout << ans;
	return 0;
}