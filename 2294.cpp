#include<bits/stdc++.h>
using namespace std;
int n,k;
int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin >> n>>k;
	vector<int>v(n);
	vector<int>dp(k + 1,1e9);
	dp[0] = 0;
	for (int i = 0; i < n; i++)
		cin >> v[i];
	for (int i = 1; i < k+1; i++) {
		for (int j = 0; j < n; j++) {
			if (i - v[j] >= 0) {
				dp[i] = min(dp[i - v[j]] + 1, dp[i]);
			}
		}
	}
	if (dp[k] == 1e9)
		cout << -1;
	else
		cout << dp[k];
	return 0;
}