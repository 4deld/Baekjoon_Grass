#include<bits/stdc++.h>
using namespace std;
int t, d;
int main() {
	cin >> t;
	while (t--) {
		cin >> d;
		int i = sqrt(d);
		for (; ; i--) {
			if (i * i + i <= d)break;
		}
		cout<< i << '\n';
	}
}