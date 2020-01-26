#include <iostream>
#include <queue>
using namespace std;

int main() {
	int n, w, L, truckTemp, crossTruck = 0, time = 0;
	queue<int> truck;
	queue<int> bridge;

	cin >> n >> w >> L;
	for (int i = 0; i < n; i++) {
		cin >> truckTemp;
		truck.push(truckTemp);
	}
	for (int i = 0; i < w; i++)
		bridge.push(0);

	while (crossTruck != n) {
		if (bridge.front() != 0) {
			crossTruck += 1;
			truckTemp = bridge.front();
			L += truckTemp;
		}
		if (!truck.empty() && L >= truck.front()) {
			truckTemp = truck.front();
			L -= truckTemp;
			truck.pop();
			bridge.push(truckTemp);

		}
		else
			bridge.push(0);
		bridge.pop();
		time += 1;
	}
	cout << time;
	return 0;
}
