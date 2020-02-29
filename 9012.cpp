#include <iostream>
#include <stack>
#include <string>
using namespace std;

string VPSCheck(string PS) {
	stack<char> s;
	for (int i = 0; i < PS.length(); i++)
	{
		if (PS[i] == '(')
			s.push(PS[i]);
		else if (s.empty())
			return "NO";
		else
			s.pop();
	}
	if (s.empty())
		return "YES";
	else
		return "NO";
}
int main()
{
	string PS;
	int i;
	cin >> i;
	while (i--)
	{
		cin >> PS;
		cout << VPSCheck(PS) << "\n";
	}
	return 0;
}
