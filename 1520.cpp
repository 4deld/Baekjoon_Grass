#include<bits/stdc++.h>
using namespace std;
int n, m;
int board[504][504];
int dp[504][504];
int dx[4] = { 0,1,0,-1 };
int dy[4] = { 1,0,-1,0 };

int s(int y,int x) {
	if (y == n - 1 && x == m - 1)
		return 1;
	if (dp[y][x] != -1)
		return dp[y][x];
	dp[y][x] = 0;
	for (int dir = 0; dir < 4; dir++) {
		int nx = x + dx[dir];
		int ny = y + dy[dir];
		if (ny < 0 || ny >= n || nx < 0 || nx >= m)
			continue;
		if (board[y][x] <= board[ny][nx])
			continue;
	
		dp[y][x]+=s(ny, nx);
		//for (int i = 0; i < n; i++) {
		//	for (int j = 0; j < m; j++) {
		//		cout << dp[i][j]<<"  ";
		//	}
		//	cout << '\n';
		//}
		//cout << '\n';
	}
	return dp[y][x];
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> board[i][j];
		}
	}
	for (int i = 0; i < n; i++)
		fill(dp[i], dp[i] + m, -1);
	cout << s(0, 0);

	return 0;
}