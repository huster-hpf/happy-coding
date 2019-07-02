#include <iostream>
using namespace std;
struct Node
{
	int _val;
	Node *_next;
	Node(int x = 0) :_val(x), _next(NULL) {}
};
int main()
{
	Node *pre_head;	
	Node *pre_index = pre_head;
	Node *index = pre_head->_next;
	while (index&&index->_next)
	{
		if (index->_val == index->_next->_val)
			pre_index->_next = index->_next->_next;
		else
		{
			pre_index = pre_index;
			index = index->_next;
		}
	}
	index = pre_head->_next;
	while (index)
	{
		cout << index->_val << '\t';
		index = index->_next;
	}
	system("pause");
	return 0;
}