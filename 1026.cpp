#include<bits/stdc++.h>
using namespace std;
int n;

int main() {
	cin.tie(0);
	cin >> n;
	vector<int>a(n);
	vector<int>b(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
		cin >> b[i];
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	int ans = 0;
	for (int i = 0; i < n; i++)
		ans += a[i] * b[n - i - 1];
	cout << ans;
	return 0;
}