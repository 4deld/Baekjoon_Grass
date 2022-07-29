#include<bits/stdc++.h>
using namespace std;
bool board[10][10], cpy[10][10];
int cnt, ans = 101;
bool off() {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (cpy[i][j])
				return false;
		}
	}
	return true;
}
void cy() {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cpy[i][j] = board[i][j];
		}
	}
}
int main() {
	char a;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cin >> a;
			if (a == '#')
				board[i][j] = false;
			else
				board[i][j] = true;
		}
	}
	vector<int>stk;
	for (int k = 0; k < (1 << 10); k++) {
		cy();
		cnt = 0;
		for (int u = 0; u < 10; u++) {
			if (k & (1 << u)) {
				stk.emplace_back(u);
			}
		}
		while (!stk.empty()) {
			int t = stk.back();
			stk.pop_back();
			cnt++;
			cpy[0][t] = !cpy[0][t];
			if (t > 0)
				cpy[0][t - 1] = !cpy[0][t - 1];
			if (t < 9)
				cpy[0][t + 1] = !cpy[0][t + 1];
			cpy[1][t] = !cpy[1][t];
		}
		for (int i = 1; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				if (cpy[i - 1][j] == true) {
					cnt++;
					cpy[i - 1][j] = !cpy[i - 1][j];
					cpy[i][j] = !cpy[i][j];
					if (j < 9)
						cpy[i][j + 1] = !cpy[i][j + 1];
					if (j > 0)
						cpy[i][j - 1] = !cpy[i][j - 1];
					if (i < 9)
						cpy[i + 1][j] = !cpy[i + 1][j];
				}
			}
		}

		if (off() && cnt < ans)
			ans = cnt;
	}
	if (ans == 101)
		cout << -1;
	else
		cout << ans;
	return 0;
}