#include<bits/stdc++.h>
using namespace std;
int a, b, c;
int main() {
	cin >> a >> b >> c;
	if (a == b && b == c && c == 60)
		cout << "Equilateral";
	else if (a + b + c == 180 && (a == b || b == c || c == a))
		cout << "Isosceles";
	else if (a + b + c == 180)
		cout << "Scalene";
	else
		cout << "Error";

	return 0;
}