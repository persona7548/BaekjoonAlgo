#include <iostream>
using namespace std;

int main() {
	int n, people[50][3];
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> people[i][0] >> people[i][1];
		people[i][2] = 1;
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (i == j)
				continue;

			if (people[i][0] < people[j][0] && people[i][1] < people[j][1])
				people[i][2] += 1;
		}
		cout << people[i][2] << " ";
	}

	return 0;
}
