#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int k;
	int cnt = 0;
	for (int i = 0; i < 5; i++) {
		cin >> k;
		if (n == k)
			cnt++;
	}
	
	cout << cnt;

	return 0;
}