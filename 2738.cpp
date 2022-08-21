#include<bits/stdc++.h>
using namespace std;
int a[101][101],k,n,m;
int main() {
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> k;
			cout << a[i][j] + k << ' ';
		}
		cout << '\n';
	}
	return 0;
}