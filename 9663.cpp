#include <iostream>
using namespace std;

bool stage[16][16];
int n,answer;

bool queenCheck(int x, int y) {
	int count = 0;
	for (int i = 1; i <= n; i++) {
		if (stage[x][i] || //상하
			((x - y + i) <= n && (x - y + i) > 0 && stage[x - y + i][i]) || // 왼쪽 대각선
			((x + y - i) <= n && (x + y - i) > 0 && stage[x + y - i][i])) // 오른쪽 대각선
			return false;
	}
	return true;
}
void backtracking(int y) {
	if (y > n)
		answer++;
	else
		for (int i = 1; i <= n; i++) {
			if (queenCheck(i, y)) {
				stage[i][y] = true;
				backtracking(y + 1);
				stage[i][y] = false;
			}
		}
}

int main() {
	cin >> n;
	backtracking(1);
	cout << answer;
}
