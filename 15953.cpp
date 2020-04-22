#include <iostream>

using namespace std; 
int arr[1001];
int firstPrize(int x) {
	int price;
	if (x >= 22 || x == 0) price = 0;
	else if (x >= 16) price = 10;
	else if (x >= 11) price = 30;
	else if (x >= 7) price = 50;
	else if (x >= 4) price = 200;
	else if (x >= 2) price = 300;
	else price = 500;
	return price;
}
int secondPrize(int x) {
	int price;
	if (x >= 32 || x == 0) price = 0;
	else if (x >= 16) price = 32;
	else if (x >= 8) price = 64;
	else if (x >= 4) price = 128;
	else if (x >= 2) price = 256;
	else price = 512;
	return price;
}
int main() {
	
	int n;
	int a, b;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		arr[i]=firstPrize(a) + secondPrize(b);
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i]*10000 << "\n";
	}

	return 0;
}
