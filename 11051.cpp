#include<bits/stdc++.h>
using namespace std;
int n, k;
int dp[1004][1004];
int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	dp[0][0] = 1;
	cin >> n >> k;
	for (int i = 1; i < n + 1; i++) {
		for (int j = 0; j < i + 1; j++) {
			if (j == 0 || j == i)
				dp[i][j] = 1;
			else {
				dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - 1]) % 10007; //prevent overflow
			}
		}
	}
	cout << dp[n][k];

	return 0;
}