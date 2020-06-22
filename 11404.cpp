#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int graph[101][101] = { 0, };
	fill(graph[0], graph[0] + 101 * 101, 9900001);
	int n, m, u, v, w;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> u >> v >> w;
		if (graph[u][v] > w)
			graph[u][v] = w;
	}

	for (int i = 1; i <= n; i++)
		graph[i][i] = 0;

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			for (int k = 1; k <= n; k++)
				if (graph[j][i] + graph[i][k] < graph[j][k])
					graph[j][k] = graph[j][i] + graph[i][k];

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++)
			if (graph[i][j] == 9900001)
				cout << 0 << " ";
			else
				cout << graph[i][j] << " ";
		cout << "\n";
	}


	return 0;
}
