#include<bits/stdc++.h>
using namespace std;

int k;
int n, m, b[10];
vector<int>a;
void f(int l) {
	if (l == m) {
		for (int i = 0; i < l; i++)
			cout << a[b[i]] << ' ';
		cout << '\n';
	}
	else {
		for (int i = 0; i < n; i++) {
				b[l] = i;
				f(l + 1);
		}
	}
	return;
}
int main() {
	cout.tie(0);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> k;
		a.push_back(k);
	}
	sort(a.begin(), a.end());
	f(0);
	return 0;
}