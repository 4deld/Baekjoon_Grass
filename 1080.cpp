#include<bits/stdc++.h>
using namespace std;
int n, m,cnt;
bool a[54][54], b[54][54];
bool p() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] != b[i][j])
				return false;
		}
	}
	return true;
}
int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%1d", &a[i][j]);
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%1d", &b[i][j]);
		}
	}
	//�迭�� ���� ��ܺ��� ������,������ Ž���� �����ؼ� a�迭�� b�迭�� �ٸ��� 
	//�� ĭ���� ������ 2ĭ ���������� 2ĭ 3x3�� ���� 
	//�ֳ��ϸ� �̷��� Ž���ϸ� �� ĭ�� �ٸ��� �ȹٲٰ� �Ѿ�� �ٽ� �ٲ� ����� ����
	//���� ���� ĭ�� 2�� ������Ű�� ���� ���ǹ��� 0,1 �ΰ����ۿ� ���� ������

	for (int i = 0; i < n - 2; i++) {
		for (int j = 0; j < m - 2; j++) {
			if (a[i][j] != b[i][j]) {
				for (int k = i; k < i + 3; k++) {
					for (int u = j; u < j + 3; u++) {
						b[k][u] = !b[k][u];
					}
				}
				cnt++;
			}
		}
	}
	if (p())
		cout << cnt;
	else
		cout << -1;
	return 0;
}