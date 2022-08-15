#include<bits/stdc++.h>
using namespace std;
long long cnt = 0;
int a[1000004];
int sorted[1000004];
void Merge(int* arr, int l, int m, int r) {
	//cout << l<<' ' << m<<' ' << r << '\n';
	int i = l;
	int j = m + 1;
	int k = l;

	while (i <= m && j <= r) {
		if (arr[i] > arr[j]) {
			cnt += m + 1 - i;
			sorted[k++] = arr[j++];
		}
		else {
			sorted[k++] = arr[i++];
		}
	}
	while (i <= m) {
		sorted[k++] = arr[i++];
	}
	while (j <= r) {
		sorted[k++] = arr[j++];
	}
	for (int h = l; h <= r; h++) {
		arr[h] = sorted[h];
	}
}
void Merge_Sort(int arr[], int l, int r) {
	if (l >= r)
		return;
	int m = (l + r) / 2;
	Merge_Sort(arr, l, m);
	Merge_Sort(arr, m + 1, r);
	Merge(arr, l, m, r);
}
int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	Merge_Sort(a, 0, n - 1);
	cout << cnt;
	return 0;
}