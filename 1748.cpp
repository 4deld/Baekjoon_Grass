#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll n,ans,w,q;
int main() {
	ios::sync_with_stdio(0);
	cin >> n;
	w = 1;
	q = 9;
	while (1) {
		if (n <q) {
			ans += n * w;
			break;
		}
		ans += 9*pow(10,w-1)*w;
		n -= q;
		q = 9 * pow(10, w);
		w++;
	}
	cout << ans;
}