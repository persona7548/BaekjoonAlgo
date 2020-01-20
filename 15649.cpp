#include <iostream>
using namespace std;

bool IsNum[9];
int num[9];
int x = 0;
void backtracking(int k,int n, int m) {
	if (k >= m)
	{
		for (int i = 0; i < m;i++) 
			cout << num[i] << " ";
		cout<< "\n";
	}
	else {
		for (int i = 0; i < n;i++) {
			if (!IsNum[i])
			{
				IsNum[i] = true;
				num[k] = i+1;
				backtracking(k + 1, n, m);
				IsNum[i] = false;
			}
		}
	}
}

int main(){
	int n, m;
	cin >> n >> m;
	backtracking(0,n,m);
}
