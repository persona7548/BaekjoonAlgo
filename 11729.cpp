#include <iostream>
#include <math.h>
using namespace std;
void hanoi(int from, int to,int n){
	if (n == 0) 
		return;
	hanoi(from,6-(from+to) , n - 1);
	cout << from <<" "<< to<<"\n";
	hanoi(6 - (from + to), to,n - 1);
}
int main() {
	int n;
	cin >> n;
	cout << (int)(pow(2, n) - 1) << "\n";
	hanoi(1,3,n);
	return 0;
}
