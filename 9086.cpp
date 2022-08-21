#include<bits/stdc++.h>
using namespace std;
int t;
string in;
int main() {
	cin.tie(0);
	cout.tie(0);
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> in;
		cout << in.front() << in.back() << '\n';
	}
	return 0;
}