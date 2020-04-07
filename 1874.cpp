#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;
int answer[100001];
int main() {
	int len;
	stack<int> st;
	vector<char> v;
	st.push(0);
	cin >> len;
	for (int i = 0; i < len; i++) 
		cin >> answer[i];
	int j = 0, i = 1 ;
	while (len>j) {
		if (i > len+1)
		{
			cout << "NO";
			return 0;
		}
		if (answer[j] != st.top()) {
			st.push(i);
			v.push_back('+');
			i++;
		}
		else
		{
			st.pop();
			v.push_back('-');
			j++;
		}	
	}
	for (int i = 0; i < v.size(); i++)
		cout << v[i]<<"\n";
	return 0;
}
