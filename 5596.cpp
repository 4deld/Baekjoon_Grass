#include<bits/stdc++.h>
using namespace std;

int a, b;
int main() {
	int k;
	for (int i = 0; i < 4; i++) {
		cin >> k;
		a += k;
	}
	for (int i = 0; i < 4; i++) {
		cin >> k;
		b += k;
	}
	if (a > b)
		cout << a;
	else
		cout << b;

	return 0;
}