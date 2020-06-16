#include <iostream>
using namespace std;
int k[14], tmp[7];

void DFS(int now, int depth, int n) {
	if (depth == 6) {
		for (int i = 0; i < 6; i++)
			cout << tmp[i] << " ";
		cout << "\n";
	}
	else
	{
		for (int i = now; i < n; i++) {
			tmp[depth] = k[i];
			DFS(i + 1, depth + 1, n);
		}
	}
}

int main() {
	int n;
	cin >> n;
	while (n) {
		for (int i = 0; i < n; i++)
			cin >> k[i];
		DFS(0, 0, n);
		cout << "\n";
		cin >> n;
	}
	return 0;
}
