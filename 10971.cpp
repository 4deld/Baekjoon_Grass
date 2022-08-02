#include<bits/stdc++.h>
using namespace std;
int n, w[20][20],a;
int c[20][1 << 11];

int tsp_DP(int crt_town, int crt_visit) {
	int &ret = c[crt_town][crt_visit]; //c++ reference
	if (ret != -1) //visit check
		return ret;
	ret = 1e6 * 16 + 1;
	if (crt_visit == (1 << n) - 1) {//bitmask�� ��� ������ �� ������ �� 
		ret= w[crt_town][0]; //0�� ������ ����
		return ret;
	}

	for (int nxt_town = 1; nxt_town < n; nxt_town++) {
		//(1 << nxt_town) ���⼭ ������ 2������ 1�� x�� ������ �κ����տ� ���� 0�� �ȳ���
		if (!(crt_visit & (1 << nxt_town))) { //and�������� ���� �ִ� ������ ���� ������ �κ����տ� ���� ����
			int nxt_visit = crt_visit | (1 << nxt_town); //shift, or �������� ������ �ϳ��� �߰� 
			ret = min(ret, tsp_DP(nxt_town, nxt_visit) + w[crt_town][nxt_town]); 
		}
	}
	return ret;
}
int main() {
	cin >> n; 
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a;
			if (a == 0 && i != j)
				w[i][j] = 1e6 * 16 + 1;
			else
				w[i][j] = a;
		}
	}
	for (int i = 0; i < 20; i++)
		fill(c[i], c[i] + (1 << 11), -1);
	
	cout << tsp_DP(0, 1);

	return 0;
}