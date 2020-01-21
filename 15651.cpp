#include <iostream>
using namespace std;

bool IsNum[9];
int num[9];
int n, m;
void backtracking(int point) {
	if (point > m)
	{
		for (int i = 1; i <= m;i++) 
			cout << num[i] << " ";
		cout << "\n";
	}
	else {
		for (int i = 1; i <= n;i++) {
			if (!IsNum[i])
			{
				num[point] = i;
				backtracking(point+1);
			}
		}
	}
}

int main(){
	cin >> n >> m;
	backtracking(1);
}
