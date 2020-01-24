#include <iostream>
using namespace std;

int main() {
	int i, n, k, coin[11] = { 0 }, count = 0;
	cin >> n >> k;
	for (i = 0; i < n; i++)
		cin >> coin[i];
	i = n-1;
	while (k != 0) {
		if ((k - coin[i]) >= 0)
		{
			k -= coin[i];
			count++;
		}
		else
			i -= 1;
	}
	cout << count;
	return 0;
}
