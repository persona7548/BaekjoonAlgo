#include <iostream>
using namespace std;
int main(){
	int n,arr[1001],temp;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	for (int i = n - 1; i > 0; i--) 
		for (int j = 0; j < i; j++) 
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
	for (int i = 0; i<n; i++) {
		cout << arr[i] << endl;
	}
}
