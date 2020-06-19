#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int max=0,n,tmp;
	vector <int> rope;

	cin >> n;
	for (int i = 0; i <n; i++) {
		cin >> tmp;
		rope.push_back(tmp);
	}
	sort(rope.begin(), rope.end());

	for (int i = 0; i < n; i++) {
		if (max <rope[i] * (n - i))
			max = rope[i] * (n - i);
	}
	cout << max;

	
	return 0;
}
