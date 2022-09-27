#include<bits/stdc++.h>
using namespace std;
int a, b,cnt;
int main() {
	cin >> a >> b;
	while (1) {
		b -= (a << cnt);
		if (b < 0)
			break;
		cnt++;
	}
	cout << cnt;
	return 0;
}