#include <iostream>
using namespace std;

bool IsNum[9];
int num[9];
int n, m;
void backtracking(int point,int minNum) {
	if (point > m)
	{
		for (int i = 1; i <= m;i++) 
			cout << num[i] << " ";
		cout << "\n";
	}
	else {
		for (int i = minNum; i <= n;i++) {
			if (!IsNum[i])
			{
				IsNum[i] = true;
				num[point] = i;
				backtracking(point+1, i+1);
				IsNum[i] = false;
			}
		}
	}
}

int main(){
	cin >> n >> m;
	backtracking(1,1);
}
