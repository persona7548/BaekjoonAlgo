#include <iostream>
using namespace std;

int main() {
	int x,sum=1;
	cin >> x;
	while (x != 1) {
		sum += (x % 2);
		x /= 2;
	}
	cout << sum;
	return 0;
}
