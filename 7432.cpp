#include<bits/stdc++.h>
using namespace std;

struct Node{
	map<string, Node>child; //string 사전순으로 정렬 됨
};
int n,q;
string in,k;

void insert(Node&n,vector<string>v,int idx) {
	if (q == idx)
		return;
	if (!(n.child.count(v[idx]))) { //없어서 만들어줘야 하는 경우
		n.child[v[idx]] = Node();
	}
	insert(n.child[v[idx]], v, idx + 1); //다음 칸으로 넘어가기
}

void traverse(Node &n,int dh) {
	for (auto& c : n.child) {
		for (int i = 0; i < dh; i++) {
			cout << " ";
		}
		cout << c.first << '\n';

		traverse(c.second, dh + 1);
	}
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	cout.tie(0);

	Node Root;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> in;
		q = 0;
		k = "";
		vector<string>v(100);
		for (int j = 0; j < in.size(); j++) {
			if (in[j] == '\\') {
				v[q++] = k;
				k = "";
			}
			else if (j == in.size() - 1) {
				k += in[in.size()-1];
				v[q++] = k;
			}
			else {
				k += in[j];
			}
		}
		//for (int i=0; i<q; i++)
		//	cout << 'a' << v[i] << '\n';
		insert(Root, v, 0);
	}
	traverse(Root,0);
	return 0;
}