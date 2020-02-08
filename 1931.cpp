#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
	int n,start,end,nowTime=0,count=0;
	priority_queue <pair<int, int>> pq;
	cin >> n;
	while (n--)
	{
		cin >> start >> end;
		pq.push(make_pair(-end, -start));
	}
	while (!pq.empty()) {
		if (-pq.top().second >= nowTime) {
			count++;
			nowTime = -pq.top().first;
			pq.pop();
		}
		else
			pq.pop();
	}
	cout << count;
	return 0;
}
