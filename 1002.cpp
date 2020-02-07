#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main() {
	int n;
	double x1, x2, y1, y2, r1, r2, d;
	cin >> n;
	while (n--) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		if (x1 == x2 && y1 == y2) {
			if (r1 == r2)
				cout << -1 << "\n";
			else
				cout << 0 << "\n";
			continue;
		}
		d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
		if (abs(r1 - r2) < d && (r1 + r2) > d)
			cout << 2 << "\n";
		else if (abs(r1 - r2) == d || (r1 + r2) == d)
			cout << 1 << "\n";
		else
			cout << 0 << "\n";

	}
	return 0;
}

