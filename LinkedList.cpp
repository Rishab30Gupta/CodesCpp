//BASIC TEMPLATE
#include<bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	Node *head = new Node(10);
	Node *temp1 = new Node (20);
	Node *temp2 = new Node (30);
	head->next = temp1;
	temp1->next = temp2;

	return 0;
}
