#include <iostream>
#include <queue>
using namespace std;

int main() {
	queue<int> q;
	int n, k,i,temp;
	cin >> n>>k;
	for (i = 1; i <= n; i++)
		q.push(i);
	cout << "<";
	while (q.size() !=1) {
		for (i = 1; i < k; i++) {
			temp = q.front();
			q.pop();
			q.push(temp);
		}
		cout << q.front() << ", ";
		q.pop();
	}
	cout <<q.front()<< ">";
	return 0;
}
