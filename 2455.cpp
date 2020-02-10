#include <iostream>
using namespace std;

int main() {
	int max = 0,station=4,train=0,in,out;
	while (station--)
	{
		cin >> out >> in;
		train += in;
		train -= out;
		max = max > train ? max : train;
	}
	cout << max;
	return 0;
}
