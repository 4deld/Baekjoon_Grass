#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll n, mncost = 1e9 +2, a, ans;
queue<ll>d;
queue<ll>cost;
int main() {
	cin >> n;
	n -= 1;
	for (int i = 0; i < n; i++) {
		cin >> a;
		d.push(a);
	}
	for (int i = 0; i < n; i++) {
		cin >> a;
		cost.push(a);
	}

	while (!d.empty()) {
		mncost = mncost > cost.front() ? cost.front() : mncost;
		ans += d.front() * mncost;
		cost.pop();
		d.pop();
	}

	cout << ans;
	return 0;
}