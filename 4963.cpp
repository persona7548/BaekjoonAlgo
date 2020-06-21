#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int arr[51][51];
void DFS(int x, int y) {
	int nearX, nearY;
	for (int i = -1; i < 2; i++) {
		for (int j = -1; j < 2; j++) {
			nearX = x + i;
			nearY = y + j;
			if (nearX>=0&&nearY>=0&&arr[nearX][nearY]) {
				arr[nearX][nearY] = 0;
				DFS(nearX, nearY);
			}
		}
	}
}


int main() {
	int w, h, island = 0;
	while (1) {
		cin >> w >> h;
		if (!w && !h)
			return 0;

		for (int i = 0; i < h; i++)
			for (int j = 0; j < w; j++)
				cin >> arr[i][j];

		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (arr[i][j]) {
					island += 1;
					arr[i][j] = 0;
					DFS(i, j);
				}

			}
		}

		cout << island << "\n";
		island = 0;
		for (int i = 0; i < 51; i++) {
			for (int j = 0; j < 51; j++) {
				arr[i][j] = 0;
			}
		}


	}


	return 0;
}
