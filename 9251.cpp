#include<bits/stdc++.h>
using namespace std;

int lcs[4004][4004],mx;
string a, b;
int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);

	cin >> a >> b;
	int alen = a.length();
	int blen = b.length();
	for (int i = 0; i < alen; i++) {
		for (int j = 0; j < blen; j++) {
			if (a[i] == b[j]) {
				lcs[i + 1][j + 1] = lcs[i][j] + 1;
			}
			else {
				lcs[i + 1][j + 1] = max(lcs[i][j + 1], lcs[i + 1][j]);
			}
			if (lcs[i + 1][j + 1] > mx)
				mx = lcs[i + 1][j + 1];
		}
	}
	cout << mx;
	return 0;
}