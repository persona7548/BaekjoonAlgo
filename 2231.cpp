#include <iostream>

using namespace std;

int main() {
	int n,sum,tmp;
	cin >> n;
	for (int i = n - 54; i <= n; i++) {
		sum =tmp=i;
		while (tmp>0)
		{
			sum += tmp % 10;
			tmp /= 10;
		}
		if (sum == n)
		{
			cout << i;
			return 0;
		}
	}
	cout << 0;
	return 0;
}
