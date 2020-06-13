#include <iostream>

using namespace std;
int arr[10];
int main() {
	long long a, b, c;
	cin >> a >> b >> c;
	a *= b;
	a *= c;
	while (a > 0) {
		arr[a % 10]++;
		a /= 10;
	}
	for(int i=0;i<10;i++)
		cout << arr[i]<<"\n";
	return 0;
}
