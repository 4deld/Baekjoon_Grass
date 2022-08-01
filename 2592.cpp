#include<bits/stdc++.h>
using namespace std;

int avg, y[10], z[10000];
pair<int, int>l;
int main() {
	for (int i = 0; i < 10; i++) {
		cin >> y[i];
		avg += y[i];
		z[y[i]] += 1;
	}
	for (int i = 0; i < 1000+1; i+=10) {
		if (z[i] > l.second)
			l = { i,z[i] };
	}
	cout << avg / 10 << '\n' << l.first;
	return 0;
}