#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <queue>
#include <stdio.h>
using namespace std;

int graph[51][51];
int N, M, K;

void BFS(int x,int y) {
	queue<pair<int, int>> q;
	q.push(pair<int, int>(x, y));
	while (!q.empty()) {
		x = q.front().first;
		y = q.front().second;
		q.pop();
		graph[x][y] = 0;	

		for (int i = -1; i <= 1; i += 2) {
			if (graph[x+i][y] ==1) {
				graph[x + i][y] = 0;
				q.push(pair<int, int>(x + i,y));
			}
			if (graph[x][y+i] == 1) {
				graph[x][y + i] = 0;
				q.push(pair<int, int>(x , y+i));
			}
		}
	}
}

int main() {
	int T,x,y;
	cin >> T;
	for (int t = 0; t < T; t++) {
		int sum = 0;
		cin >> N >> M >> K;
		for (int i = 0; i < K; i++) {
			cin >> x >> y;
			graph[x][y] = 1;
		}
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (graph[i][j] == 1) {
					sum++;
					BFS(i, j);
				}
			}
		}
		cout << sum << "\n";
	}

	return 0;
}
