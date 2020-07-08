#include <iostream>

using namespace std;


int main() {
	int n,m,k,num=0;
	cin >> n>>m>>k;
	while (1) {
		if (k <= n+m - 3 &&n >= 2 && m >= 1) {
			n -= 2;
			m -= 1;
			num++;
		}
		else {
			cout << num;
			break;
		}
	}
	return 0;
}
