#include <iostream>
#include <cmath>
using namespace std;

int stage[10][10];
int n, answer;

bool check(int x, int y, int num) {
	int count = 0;
	int squareX = int(ceil(x / 3.0)), squareY = int(ceil(y / 3.0));
	for (int i = 1; i <= 9; i++) {
		if (stage[x][i] == num|| stage[i][y] == num)
			return false;
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (stage[squareX * 3 - i][squareY * 3 - j] == num)
				return false;
		}
	}
	return true;
}
void backtracking(int x, int y) {
	if (y > 9) {
		for (int i = 1; i <= 9; i++) {
			for (int j = 1; j <= 9; j++) {
				cout << stage[i][j] << " ";
			}
			cout << "\n";
		}
		exit(0);
	}
	else if (x > 9)
		backtracking(1, y + 1);
	else {
		if (!stage[x][y])
			for (int j = 1; j <= 9; j++) {
				if (check(x, y, j)) {
					stage[x][y] = j;
					backtracking(x + 1, y);
					stage[x][y] = 0;
				}
			}
		else
			backtracking(x + 1, y);
	}
}

int main() {
	for (int i = 1; i <= 9; i++)
		for (int j = 1; j <= 9; j++) {
			cin >> n;
			stage[i][j] = n;
		}
	backtracking(1, 1);
	return 0;
}
