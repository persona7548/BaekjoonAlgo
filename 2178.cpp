#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <queue>
#include <stdio.h>
using namespace std;

int graph[101][101];
int N, M, V;

int BFS() {
	int x, y, count = 1, depth = 0;
	queue< pair<int, int>> q;
	q.push(pair<int, int>(0, 0));
	while (graph[N-1][M-1]) {
		depth = q.front().first;
		x = q.front().second/M;
		y = q.front().second%M;
		q.pop();
		graph[x][y] = 0;
		for (int i = -1; i <= 1; i += 2) {
			if (graph[x + i][y] == 1) {
				graph[x + i][y] = 0;
				q.push(pair<int, int>(depth+1,(x + i)*M+y));
	
			}
			if (graph[x][y + i] == 1) {
				graph[x][y + i] = 0;
				q.push(pair<int, int>(depth+1,x*M+ (y + i)));
			
			}
		}
	}
	return depth+2;
}

int main() {
	priority_queue< int, vector<int>, greater<int> > pq;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%1d", &graph[i][j]);
		}
	}
	cout << BFS();

	return 0;
}
