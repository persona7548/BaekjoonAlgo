#include <iostream>
using namespace std;

bool IsNum[9];
int num[9];
int n, m;
void backtracking(int point) {
	if (point > m)
	{
		for (int i = 1; i <= m; i++)
			cout << num[i] << " ";
		cout << "\n";
	}
	else {
		for (int i = 1; i <= n; i++) {
			if (!IsNum[i])
			{
				for (int j = 1; j < i; j++)
					IsNum[j] = true;
				num[point] = i;
				backtracking(point + 1);
				for (int j = 1; j < i; j++)
					IsNum[j] = false;
			}
		}
	}
}

int main() {
	cin >> n >> m;
	backtracking(1);
}
