#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int x, y, w, h, a,b;
	cin >> x >> y >> w >> h;

	abs(x - w) < abs(y - h) ? a = abs(x - w) : a = abs(y - h);
	x < y ? b =x : b = y;
	a < b ? a=a: a = b;
	cout << a;
	return 0;
}
