#include <iostream>

using namespace std;

bool check(int n) {
	int x = 0;
	if(!(n/100))return true;
	while (n/100!=0) {
		int a = n % 10;
		int b = (n / 10) % 10;
		int c = (n / 100) % 10;
		if (a - b != b - c)return false;
		n /= 10;
	}
	return true;
}

int main() {
	int N,count =0;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		if (check(i))count++;
	}
	cout << count;
	
	return 0;
}
