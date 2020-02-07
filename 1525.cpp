#include <iostream>
#include <algorithm>
#include <queue>
#include <math.h>
using namespace std;


int answer = 123456780;

int valueCheck() {
	int h = 0;
	for (int i = 1; i <= 9; i++)
		if (puzzle[i] != answer[i])
			h++;
	return h;
}

int Astar(int puzzle) {
	int count = 0;
	priority_queue <pair<int, int>> pq;
	pq.push(make_pair(count + valueCheck(), puzzle));
	while (!pq.empty()) {
		int prevW = (-pq.top().first) - count;
		int zerp = pq.top().second;
		pq.pop();

		count++;
		for (int i = -3; i <= 3; i += 2) {
			if (zero + i > 0 && zero + i < 10) {
			
			}
		}

		if (prevW >= (-pq.top().first) - count) {
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
	int puzzle = 0, temp;
	for (int i = 0; i < 9; i++) {
		cin >> temp;
		puzzle *= 10;
		puzzle += temp;
	}

	cout << Astar(puzzle);
	return 0;
}
