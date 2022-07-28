#include<bits/stdc++.h>
using namespace std;
int t, n,a,b;
int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin >> t;
	while (t--) {
		vector<int>v(10004);
		cin >> n;

		for (int i = 0; i < n - 1; i++) {
			cin >> a >> b;
			v[b] = a;
		}
		cin >> a >> b;
		int aptr=a, bptr=b,flag=0;
		while (!flag) {
			while (bptr != 0) {
				if (aptr == bptr) {
					cout << aptr<<'\n';
					flag = 1;
					break;
				}
				bptr = v[bptr];
			}
			bptr = b;
			aptr = v[aptr];
		}
	}

	return 0;
}