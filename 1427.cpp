#include <iostream>
using namespace std;

int main() {
	int num[10]; std:fill_n(num, 10, 0);
	int n;
	cin >> n;
	while (n / 10 != 0) {
		num[n % 10] += 1;
		n /= 10;
	}
	num[n] += 1;
	n = 9;
	while (n>=0) {
		if(num[n]!=0)
			for(int i =num[n];i>0;i--)
				cout << n;
		n -= 1;
	}
	return 0;
}
