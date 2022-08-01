#include<bits/stdc++.h>
using namespace std;
int n;
string a;
int main() {
	cin >> n;
	getchar();
	for (int i = 0; i < n; i++) {
		getline(cin, a);
		cout << i + 1 << '.' << ' ' << a << '\n';

	}
	return 0;
}