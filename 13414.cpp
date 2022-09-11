#include<bits/stdc++.h>
using namespace std;
unordered_map<string, int>um1; //키값이 마지막으로 언제 들어왔는지 체크
unordered_map<int, string>um2; //키값을 0부터 올라가면서 출력
int k, l, s;
string in;
int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	cout.tie(0);

	cin >> k >> l;
	for (int i = 0; i < l; i++) {
		cin >> in;
		if (um1.find(in) != um1.end()) {
			um2[um1[in]] = "x";
		}
		um1[in] = i;
		um2[i] = in;
	}
	for (int i = 0; ; i++) {
		if (um2[i] != "x") {
			cout << um2[i] << '\n';
			s++;
		}
		if (s == k || i == l)
			break;
	}
	return 0;
}