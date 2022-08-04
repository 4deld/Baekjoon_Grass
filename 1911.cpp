#include<bits/stdc++.h>
using namespace std;
int n, cnt,l,q,w,crt;
vector<pair<int,int>>v;
int main() {
	cin.tie(0);
	cin >> n>>l;
	for (int i = 0; i < n; i++) {
		cin >> q >> w;
		v.push_back({ q,w });
	}
	sort(v.begin(), v.end());

	for (auto &c : v) {
		if (c.first > crt) {
			crt = c.first;
		}
		if (c.second > crt) {
			while (c.second > crt) {
				crt += l;
				cnt++;
			}
		}
	}
	cout << cnt;
	return 0;
}