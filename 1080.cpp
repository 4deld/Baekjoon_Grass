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
	//배열의 좌측 상단부터 오른쪽,밑으로 탐색을 시작해서 a배열과 b배열이 다르면 
	//그 칸부터 밑으로 2칸 오른쪽으로 2칸 3x3을 반전 
	//왜냐하면 이렇게 탐색하면 그 칸이 다른데 안바꾸고 넘어가면 다시 바꿀 방법이 없음
	//또한 같은 칸을 2번 반전시키는 것은 무의미함 0,1 두가지밖에 없기 때문에

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