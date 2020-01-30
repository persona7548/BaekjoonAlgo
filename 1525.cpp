#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int puzzle[10];
int answer[10];

int valueCheck() {
	int h = 0;
	for (int i = 1; i <= 9; i++)
		if (puzzle[i] != answer[i])
			h++;
	return h;
}

int Astar(int zero) {
	int count = 0;
	priority_queue <pair<int, int>> pq;
	pq.push(make_pair(count + valueCheck(), zero));
	while (!pq.empty()) {
		int prevW = (-pq.top().first) - count;
		int zerp = pq.top().second;
		pq.pop();

		count++;

		while () {
			for (int i = -3; i <= 3; i += 2) {
				if (zero + i > 0 && zero + i < 10) {
					swap(puzzle[zero], puzzle[zero + i]);

					pq.push(make_pair(-(valueCheck() + count), zero + i));

					swap(puzzle[zero], puzzle[zero + i]);
				}
			}
		}
		if (prevW >= (-pq.top().first)-count) {
			swap(puzzle[zero], puzzle[pq.top().second]);
			if (valueCheck() == 0) {
				cout << count << endl;
				return count;
			}
		}
		count = -(pq.top().first) - valueCheck();

	}

	return -1;
}
int main() {
	int zero;
	int count = 0;
	for (int i = 1; i <= 8; i++) {
		answer[i] = i;
		cin >> puzzle[i];
		if (puzzle[i] == 0) {
			zero = i;
		}
	}

	cout << Astar(zero);
	return 0;
}
