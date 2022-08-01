#include<bits/stdc++.h>
using namespace std;
int mxidx, a,mx;
vector<int>v(5);
int main() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> a;
			v[i] += a;
		}
		if (mx < v[i] && i > 0) {
			mxidx = i;
			mx = v[i];
		}
	}
	cout << mxidx + 1 << ' ' << mx;
	return 0;
}