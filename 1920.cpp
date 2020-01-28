#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int match(vector <int> &arr, int target) {
	int start = 0;
	int end = arr.size() - 1;
	int mid;
	while ((end - start) >= 0) {
		mid = (start + end) / 2;
		if (arr[mid] == target)
			return 1;
		else if (arr[mid] < target)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return 0;

}
int main() {
	vector<int> arr, target;
	int n, m, temp;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		arr.push_back(temp);
	}
	sort(arr.begin(), arr.end());
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> temp;
		target.push_back(temp);
	}
	for (int i = 0; i < m; i++)
		cout << match(arr, target[i]) << "\n";
	return 0;

}
