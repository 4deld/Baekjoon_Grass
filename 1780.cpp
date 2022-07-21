#include<bits/stdc++.h>
using namespace std;
int n;
int board[3000][3000];
int a[3]; // -1 0 1

void cq(int n, int x, int y) {
    if (!n)
        return;
    int s = board[y][x];
    for (int i = y; i < y+n; i++) {
        for (int j = x; j < x+n; j++) {
            if(board[i][j]!=s){
                cq(n / 3, x, y);
                cq(n / 3, x+ n / 3, y);
                cq(n / 3, x, y + n / 3);
                cq(n / 3, x + n / 3, y + n / 3);
                cq(n / 3, x + n / 3 + n / 3, y);
                cq(n / 3, x, y + n / 3 + n / 3);
                cq(n / 3, x + n / 3 + n / 3, y + n / 3 + n / 3);
                cq(n / 3, x + n / 3 + n / 3, y + n / 3);
                cq(n / 3, x + n / 3 , y + n / 3 + n / 3);
                return;
            }
        }
    }
    int* p = a + 1;
    *(p + s) += 1;
    return;
}
int main() {
	cin >> n;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> board[i][j];

    cq(n, 0, 0);

    for (int i = 0; i < 3; i++)
        cout << a[i] << '\n';
	return 0;
}