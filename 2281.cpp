#include<bits/stdc++.h>
using namespace std;
int n, m;
int lh[1004];
int dp[1004][1004];

int s(int x, int k) {
	if (x== n)
		return 0;
	int& u = dp[x][k];

	if (u != -1)
		return u;

	u =  s(x + 1, lh[x] + 1)+ (m - k + 1) * (m - k + 1);

	if(k + lh[x] <= m)
		u = min(u, s(x + 1, k + lh[x]+1));
	return u;
}
int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> lh[i];
	}
	for (int i = 0; i < 1004; i++)
		fill(dp[i], dp[i] + m+2, -1);
	//18��° �ٿ���  k + lh[x]+1�� m+1���� �� �� �ִ� dp[i]+m+1 �ϸ� Ʋ�� ^^ ,,
	cout << s(0, 0);
	return 0;

}