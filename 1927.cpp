#include <iostream>
#include <queue>
using namespace std;

int main() {
	cin.tie(NULL);
	int n, temp;
	priority_queue<int> pq;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		if (temp == 0) {
			if (!pq.empty()) {
				cout << -pq.top() << "\n";
				pq.pop();
			}
			else
				cout << 0 << "\n";
		}
		else
			pq.push(-temp);
	}
	return 0;
}
