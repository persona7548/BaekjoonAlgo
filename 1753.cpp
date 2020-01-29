#include <iostream>
#include <vector>
#include <queue>
#include <limits.h>
using namespace std;

vector <pair<int, int>> adj[20001];

vector <int> dijkstra(int V, int E, int K) {
	int nowDist, nowPoint, nextDist, nextPoint;
	vector <int> distance(V, INT_MAX);
	distance[K] = 0;
	priority_queue<pair<int, int>> pq;
	pq.push(make_pair(0, K));

	while (!pq.empty()) {
		nowDist = -(pq.top().first);
		nowPoint = pq.top().second;
		pq.pop();

		if (distance[nowPoint] < nowDist)
			continue;

		for (int i = 0; i < adj[nowPoint].size(); i++) {

			nextPoint = adj[nowPoint][i].first;
			nextDist = nowDist + adj[nowPoint][i].second;

			if (distance[nextPoint] > nextDist) {
				distance[nextPoint] = nextDist;
				pq.push(make_pair(-nextDist, nextPoint));
			}
		}
	}
	return distance;
}

int main() {
	int V, E, K, u, v, w;
	cin >> V >> E >> K;
	V++;
	for (int i = 0; i < E; i++) {
		cin >> u >> v >> w;
		adj[u].push_back(make_pair(v, w));
	}
	vector <int> distance = dijkstra(V,E,K);

	for (int i = 1; i < V; i++) {
		if (distance[i] == INT_MAX)
			cout << "INF\n";
		else
			cout << distance[i] << "\n";
	}

	return 0;
}

