#include<bits/stdc++.h>
using namespace std;
unordered_map<string, vector<string>>um;
unordered_map<string, string>umum;
int n, m;
string teamname;
int teamnumber;
string name;
int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> teamname >> teamnumber;
		for (int j = 0; j < teamnumber; j++) {
			cin >> name;
			um[teamname].emplace_back(name);
			umum[name] = teamname;
		}
	}
	
	for (int i = 0; i < m; i++) {
		cin >> name >> n;
		if (n) {
			cout << umum[name] << '\n';
		}
		else {
			vector<string> v(um[name]);
			sort(v.begin(), v.end());
			for (auto& c : v)
				cout << c << '\n';
		}
	}

	return 0;
}