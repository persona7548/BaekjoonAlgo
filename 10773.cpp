#include <iostream>
using namespace std;

int main() {
	int stack[100001];
	stack[0] = 0;
	int i,k,n,index=1, sum = 0;

	cin >> k;
	for (i = 0; i < k; i++)
	{
		cin >> n;
		if (n == 0) 
			stack[index--] = 0;
		else 
			stack[index++] = n;
	}
	for (i = 0; i < index; i++)
		sum += stack[i];
	cout << sum << endl;
}
