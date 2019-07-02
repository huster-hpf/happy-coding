#include <iostream>
using namespace std;
struct Node
{
	int _val;
	Node *_next;
};
int main()
{
	Node *res = NULL;
	Node *pre_head;
	Node *slow = pre_head->_next, *fast = pre_head->_next;
	while (fast->_next->_next)
	{
		fast = fast->_next->_next;
		slow = slow->_next;
		if (fast == slow)
			break;
	}
	if (fast->_next->_next != NULL)
	{
		fast = pre_head->_next;
		while (fast != slow)
		{
			fast = fast->_next;
			slow = slow->_next;
		}
		res = slow;
	}
	cout << slow;
	system("pause");
	return 0;
}