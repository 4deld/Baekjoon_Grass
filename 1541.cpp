#include<bits/stdc++.h>
using namespace std;

int main() {
	string in;
	cin >> in;
	queue<int>q;
	queue<char>opr;
	string a;

	int l = in.length();
	for (int i = 0; i <l; i++) {
		if (in[i] == '+' || in[i] == '-') {
			q.push(stoi(a));
			a = "";
			opr.push(in[i]);
		}
		else {
			a.push_back(in[i]);
			if (i == l - 1)
				q.push(stoi(a));
		}
	}
	int ans = q.front();
	q.pop();
	int minuscnt = 0;
	while (!q.empty()) {
		char o = opr.front();
		opr.pop();
		int n = q.front();
		q.pop();
		if (minuscnt>0) {
			o = '-';
		}
		if (o == '+') {
			ans += n;
		}
		else {
			ans -= n;
			minuscnt++;
		}
	}
	cout << ans;

	return 0;
}