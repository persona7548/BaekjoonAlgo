#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool solution(char str[]) {
	vector<char> brace;
	for (int i = 0; str[i] != '.'; i++) {
		if (str[i] == '(' || str[i] == '[')
			brace.push_back(str[i]);
		else if (str[i] == ']') {
			if (brace.empty() || brace.back() != '[')
				return false;
			brace.pop_back();
		}
		else if (str[i] == ')') {
			if (brace.empty() || brace.back() != '(')
				return false;
			brace.pop_back();
		}
	}
	if (!brace.empty())
		return false;
		
	return true;
}
int main() {
	while (1) {
		char str[101];
		cin.getline(str, sizeof(char) * 101);
		if (str[0] == '.' && str[1] == '\0')
			break;
		if (solution(str))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	return 0;
}
