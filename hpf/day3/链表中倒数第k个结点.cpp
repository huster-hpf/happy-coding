#include <iostream>
using namespace std;
struct Node
{
	int val;
	Node *next;
	Node(int x = 0) :val(x),next(NULL) {}
};
int main()
{
	Node *pre_head = new Node(0);
	Node *index = pre_head;
	int temp, k;
	cin >> k;
	while (cin >> temp)
	{
		index->next = new Node(temp);
		index = index->next;
	}
	Node *fast = pre_head->next, *slow = pre_head->next;
	int num = 0;
	while (fast&&num < k)
	{
		fast = fast->next;
		num++;
	}
	while (fast)
	{
		slow = slow->next;
		fast = fast->next;
	}
	cout << slow->val << endl;
	system("pause");
	return 0;
}