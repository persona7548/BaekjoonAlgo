#include <iostream>
#include <queue>
using namespace std;

int main() {
	queue <pair<int, int>> q;
	priority_queue <int> pq;
	int n, findNum, m,num;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> m >> findNum;
		for (int j = 0; j < m; j++) {
			cin >> num;
			q.push(make_pair(num,j));
			pq.push(num);
		}
		int count = 0;
		while (!pq.empty())
		{
			int tempNum = q.front().first;
			int tempIndex = q.front().second;
			q.pop();
			if (tempNum == pq.top()) {
				count++;
				pq.pop();
				if(tempIndex == findNum)
					cout << count << "\n";
			}
			else
				q.push(make_pair(tempNum, tempIndex));
		}
	}

	return 0;
}
