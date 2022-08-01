#include<bits/stdc++.h>
using namespace std;
int main() {
	char a, b;
	cin >> a >> b;
	if (a == 'F') {
		cout << "0.0";
		return 0;
	}
	if (b == '-')
		a++;
	if (a == 'A')
		cout << 4;
	else if (a == 'B')
		cout << 3;
	else if (a == 'C')
		cout << 2;
	else if (a == 'D')
		cout << 1;
	else
		cout << 0;
	cout << '.';
	if (b == '+')
		cout << 3;
	else if (b == '0')
		cout << 0;
	else
		cout << 7;
	return 0;
}