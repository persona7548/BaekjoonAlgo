#include <iostream>
#include <queue>
using namespace std;

bool graph[1001][1001],DFS_Check[1001], BFS_Check[1001];
int N, M, V;

void BFS(int V) {
	queue<int> q;
	q.push(V);
	
	while (!q.empty()) {
		int x = q.front();
		cout << x<<" ";
		q.pop();
		BFS_Check[V] = true;
		for (int i = 1; i <= N; i++) {
			if (graph[x][i] && !BFS_Check[i]) {
				q.push(i);
				BFS_Check[i] = true;
			}
		}
	}
}
void DFS(int nowV) {
	DFS_Check[nowV] = true;
	cout << nowV << " ";
	for (int i = 1; i <= N; i++) 
		if (graph[nowV][i] && !DFS_Check[i])
			DFS(i);
}


int main() {
	int x, y;
	cin >> N >> M >> V;
	for (int i = 1; i <= M; i++) {
		cin >> x >> y;
		graph[x][y] = true;
		graph[y][x] = true;
	}	
	DFS(V);
	cout << "\n";
	BFS(V);
	return 0;
}
