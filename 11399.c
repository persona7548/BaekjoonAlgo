#include<stdio.h>
int main()
{
	int numArr[1001];
	int T,temp,answer;
	
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
		scanf("%d", &numArr[i]);
	
	for (int i = 0; i < T; i++)
		for (int j = 1; j < T; j++)
		{
			if (numArr[j - 1] > numArr[j])
			{
				temp = numArr[j - 1];
				numArr[j - 1] = numArr[j];
				numArr[j] = temp;
			}
		}
	answer = numArr[0];
	for (int i = 1; i < T; i++) {
		numArr[i] += numArr[i - 1];
		answer += numArr[i];
	}
	printf("%d", answer);

	return 0;
}
