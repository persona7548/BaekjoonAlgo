#include <iostream>

using namespace std; 
int money, coin = 0;
void cal(int x) {
	if (money / x > 0) {
		coin += money / x;
		money -= (x * (money / x));
	}
}
int main() {

	cin >> money;
	money = 1000 - money;
	cal(500);
	cal(100);
	cal(50);
	cal(10);
	cal(5);
	coin += money;
	cout << coin;
	return 0;
}
