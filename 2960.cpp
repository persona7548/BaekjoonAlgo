#include <iostream>
#include<cstring>
using namespace std;
int prime[1001], temp[1001];
int main() {
	int N, K,del=0;
	cin >> N >> K;
	for (int i = 1; i <= N; i++)
		temp[i] = 1;

	for (int i = 2; i <= N; i++) {
		for (int j = i; j <= N; j += i) {
			if (temp[j] == 1) {
				del++;
				temp[j] = 0;
			}
			if (del == K) {
				cout << j;
				return 0;
			}
		}
	}
}
