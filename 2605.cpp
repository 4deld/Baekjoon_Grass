#include<bits/stdc++.h>
using namespace std;
int n,a;
#define MAX_NODE 1000

struct Node {
	int data;
	Node* next;
};

Node node[MAX_NODE];
int NodeCnt = 0;
Node* head;

Node* getNode(int data) {
	node[NodeCnt].data = data;
	node[NodeCnt].next = nullptr;
	return &node[NodeCnt++];
}

void init() {
	NodeCnt = 0;
	head = getNode(-1);
	head->next = nullptr;
}
void Add(int num, int d) {
	Node* ptr = head;
	int cnt = 0;
	while (cnt != d) {
		ptr = ptr->next;
		cnt++;
	}
	Node* n = getNode(num);
	n->next = ptr->next;
	ptr->next = n;
}

int main() {
	cin >> n;
	init();
	for(int i=0; i<n; i++){
		cin >> a;
		Add(i + 1, a);
	}
		
	Node* p = head->next;
	vector<int>v(n);
	for (int i = 0; i < n; i++) {
		v[n - i-1] = p->data;
		p = p->next;
	}
	for (auto c : v)
		cout << c << ' ';
	return 0;
}