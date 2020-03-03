#include <iostream>

using namespace std;
int blue, white, arr[129][129];
void paperCheck(int startX, int startY, int endX, int endY) {

	int sum = 0;
	int checkSum = 0;
	for (int i = startX; i <= endX; i++)
		for (int j = startY; j <= endY; j++) {
			checkSum++;
			sum += arr[i][j];
		}
	if (sum == 0) 
		white++; 
	else if (sum == checkSum) 
		blue++;
	else {
		int hx = (startX + endX) / 2;
		int hy = (startY + endY) / 2;
		paperCheck(startX, startY, hx, hy);
		paperCheck(startX, hy+1, hx, endY);
		paperCheck(hx+1, startY, endX, hy);
		paperCheck(hx+1, hy+1, endX, endY);
	}
	return;
}
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			cin >> arr[i][j];
	paperCheck(1, 1, n, n);
	cout << white << "\n" << blue;
}
