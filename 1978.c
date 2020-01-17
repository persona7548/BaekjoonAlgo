#include<stdio.h>
int count;
int arr[101];
void primeCheck(int x,int y) {
	if (x == y)
		count++;
	else if (x%y == 0||x<=2)
		return;
	else
		primeCheck(x, y + 1);
}
int main()
{
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);
	for (int i = 0; i < N; i++)
		primeCheck(arr[i], 2);

	printf("%d", count);
}
