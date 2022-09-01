#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int k;
	for(int i=0;; i++){
		cin >> n;
		if (!n)
			break;
		for (int i = 0; i < n; i++)
			cin >> k;
		cout << "Case ";
		cout << i << ": ";
		cout << "Sorting... done!" << '\n';
	}

	return 0;
}