#include<bits/stdc++.h>
using namespace std;
int a, b;
int main() {
	while (1) {
	cin >> a >> b;
		if (a == b && b == 0)
			break;
	cout << a / b << ' ' << a % b << " / " << b << '\n';
	}
	return 0;
}