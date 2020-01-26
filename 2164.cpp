#include <iostream>
#include <queue>
using namespace std;

int main() {
	queue<int> q;
	int n, i;
	cin >> n;
	for (i = 1; i <= n; i++)
		q.push(i);
	while (q.size()!=1) {
		q.pop();
		if (q.size() != 1){
			i = q.front();
			q.pop();
			q.push(i);
		}
	}
	cout << q.front();
	return 0;
}
