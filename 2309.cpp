#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N[9];
void findSeven(int sum) {
	for (int i = 0; i <8; i++) {
		for (int j = i; j <9; j++) {
			if (N[i] + N[j] == sum) {
				N[i] = 0; N[j] = 0;
				return;
			}
		}
	}
}
int main() {
	int sum = -100,tmpSum;

	for (int i =0; i <9; i++) {
		cin >> N[i];
		sum += N[i];
	}
	sort(N, N + 9);
	findSeven(sum);

	for (int i = 0; i <9; i++) {
		if (N[i])cout << N[i]<<"\n";
	}

	
	return 0;
}
