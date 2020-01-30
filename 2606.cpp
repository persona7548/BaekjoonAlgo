#include <iostream>
#include <queue>
using namespace std;
bool graph[101][101], BFS_Check[101];
int BFS(int start,int pcNum) {
	queue<int> q;
	int count = 0;
	q.push(start);

	while (!q.empty()) {
		int x = q.front();
		q.pop();
		BFS_Check[start] = true;
		for (int i = 1; i <= pcNum; i++) {
			if (graph[x][i] && !BFS_Check[i]) {
				q.push(i);
				BFS_Check[i] = true;
				count++;
			}
		}
	}
	return count;
}

int main() {
	int x, y,n,m;
	cin >> n >> m;
	for (int i = 1; i <= m; i++) {
		cin >> x >> y;
		graph[x][y] = true;
		graph[y][x] = true;
	}
	cout << BFS(1,n);
	
	return 0;
}
