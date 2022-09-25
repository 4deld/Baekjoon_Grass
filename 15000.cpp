#include<bits/stdc++.h>
using namespace std;
string in;
int main() {
	cin >> in;
	int l = in.size();
	for (int i = 0; i < l; i++)
		in[i] += 'A' - 'a';
	cout << in;
	return 0;
}