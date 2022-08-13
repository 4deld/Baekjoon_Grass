#include<bits/stdc++.h>
using namespace std;
int dp[44];

int main() {
	int n;
	cin >> n;
	dp[0] = 1;
	dp[2] = 3;
	if (n % 2)
		cout << 0;
	else {
		for (int i = 4; i < n + 1; i += 2) {
			dp[i] = dp[i - 2] * 3;
			for (int j = 4; j < i + 1; j += 2) {
				dp[i] += dp[i - j] * 2;
			}
		}
		cout << dp[n];
	}
	return 0;
}