#include<bits/stdc++.h>
using namespace std;
bool vs[100004];
int parent[100004];
vector<int>v[100004];
void dfs(int node) {
	vs[node] = true;
	for (int i = 0; i < v[node].size(); i++) {
		int next = v[node][i];
		if (vs[next] == false) {
			parent[next] = node;
			dfs(next);
		}
			
	}
}
int main() {
	cin.tie(0);
	int n;
	cin >> n;
	int a, b;
	for (int i = 0; i < n - 1; i++) {
		cin >> a >> b;
		v[a].emplace_back(b);
		v[b].emplace_back(a);
	}
	dfs(1);
	for (int i = 0; i < n - 1; i++)
		cout << parent[i + 2] << '\n';
	return 0;
}