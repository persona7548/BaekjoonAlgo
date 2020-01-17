#include <iostream>
#include <string>

using namespace std;

struct ListNode{
	int value;
	ListNode* next;
};
ListNode* topNode = NULL;

void push(int data) {
	ListNode* node = new ListNode();
	node->value = data;
	node->next = topNode;
	topNode = node;
}
void empty() {
	if (!topNode)
		cout << 1 << endl;
	else
		cout << 0 << endl;
}

void pop() {
	if (!topNode)
		cout << -1 << endl;
	else {
		cout << topNode->value << endl;
		topNode = topNode->next;
	}
}

void top() {
	if (!topNode)
		cout << -1 << endl;
	else
		cout << topNode->value << endl;
}

void size(ListNode* check,int num) {
	if (check)
	{
		num++;
		size(check->next, num);
	}
	else
		cout << num<<endl;
}


int main() {
	ListNode* stack;
	stack = topNode;
	int n = 0;
	cin >> n;

	for (int i = 0; i < n;i++) {
	
		string s;
		cin >> s;
		if (s == "push") {
			int d;
			cin >> d;
			push(d);
		}
		else if (s == "pop") {
			pop();
		}
		else if (s == "size") {
			size(topNode, 0);
		}
		else if (s == "empty") {
			empty();
		}
		else if (s == "top") {
			top();
		}
	}
	return 0;
}