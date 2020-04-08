#include <iostream>
#include<cstring>
using namespace std;

int main() {
	int plus=0,minus=0, i = 0, temp = 0;
	char q[51];
	cin >> q;
	int len = strlen(q);
	for (i = 0; i < len;i++) {
		if (q[i] == '-') {
			plus += temp;
			temp = 0;
			break;
		}
		if (q[i] == '+') {
			plus += temp;
			temp = 0;
		}
		else {
			temp *= 10;
			temp += q[i]-48;
			
		}
	}
	plus += temp;
	temp = 0;
	
	for (; i < len; i++) {
		if (q[i] == '+'|| q[i] == '-') {
			minus += temp;
			temp = 0;
		}
		else {
			temp *= 10;
			temp += q[i] - 48;
		}
	}	
	minus += temp;
	cout << plus-minus;
}
