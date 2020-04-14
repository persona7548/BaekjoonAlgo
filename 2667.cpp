#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <queue>
#include <stdio.h>
using namespace std;

int graph[26][26];
int N, M, V;

int BFS(int x,int y) {
	queue<pair<int, int>> q;
	q.push(pair<int, int>(x, y));
	int sum=1;
	while (!q.empty()) {
		x = q.front().first;
		y = q.front().second;
		q.pop();
		
		graph[x][y] = 0;
		

		for (int i = -1; i <= 1; i += 2) {
			if (graph[x+i][y] ==1) {
				graph[x + i][y] = 0;
				q.push(pair<int, int>(x + i,y));
				sum++;
			}
			if (graph[x][y+i] == 1) {
				graph[x][y + i] = 0;
				q.push(pair<int, int>(x , y+i));
				sum++;
			}
		}
	}
	return sum;
}

int main() {
	priority_queue< int, vector<int>, greater<int> > pq;
	cin >> N;
	for (int i = 0; i <N; i++) {
		for (int j = 0; j < N; j++) {
			scanf("%1d", &graph[i][j]);
		}
	}
	for (int i = 0; i <N; i++) {
		for (int j = 0; j < N; j++) {
			if (graph[i][j]==1)
				pq.push(BFS(i,j));
		}
	}
	cout << pq.size()<<"\n";
	while (!pq.empty()) {
		cout << pq.top() << "\n";
		pq.pop();
	}
	return 0;
}
