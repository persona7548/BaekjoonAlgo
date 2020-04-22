#include <iostream>
#include <math.h>
using namespace std; 
long double toy[502];


long double variance(int s,int k) {
	long double var = 0,mean=0;
	for (int i = 0; i < k; i++) {
		mean += toy[s+i];
	}
	mean /= k;
	for (int i = 0; i < k; i++) {
		var += pow((toy[s+i]- mean),2);
	}
	return (long double)(var / k);
}
int main() {
	int n, k;
	long double min = 5000000000;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> toy[i];
	}

	for (int i = 0; i <= n-k; i++) {
		for (int j = k; j <= n - i; j++) {
			long double var = sqrt(variance(i, j));
			min = min > var ? var : min;
		}
	}

	cout.precision(10);
	cout << min;
	return 0;
}
