#include<bits/stdc++.h>
using namespace std;
vector<int> failure(string& s) { //failure function
	vector<int> f(s.size());
	int j = 0;

	for (int i = 1; i < s.size(); i++) {
		while (j > 0 && s[i] != s[j]) {
			j = f[j - 1];
		}

		if (s[i] == s[j]) {
			f[i] = ++j;
		}
	}

	return f;
}
vector<int>ans;
int main() {
	string s, p;

	getline(cin, s);
	getline(cin, p);
	vector<int>FF = failure(p);
	int j = 0;
	for (int i = 0; i < s.size(); i++) {
		while (j > 0 && s[i] != p[j]) {
			j = FF[j - 1];
		}
		if (s[i] == p[j]) {
			j++;
		}
		if (j == p.size()) {
			ans.emplace_back(i- (j-1)+1);
			j = FF[j - 1];
		}
	}
	cout << ans.size()<<'\n';
	for (auto& c : ans)
		cout << c << ' ';

	return 0;
}