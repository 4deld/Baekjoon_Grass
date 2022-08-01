#include<bits/stdc++.h>
using namespace std;
int n,a,b;
vector<int>v(5);
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		if (a < b)
			cout << "NO BRAINS" << '\n';
		else
			cout << "MMM BRAINS" << '\n';

	}
	return 0;
}