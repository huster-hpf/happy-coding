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
	Node *root1, *root2;
	Node *index1 = root1;
	int len1 = 0;
	while (index1)
	{
		++len1;
		index1 = index1->_next;
	}
	Node *index2 = root2;
	int len2 = 0;
	while (index2)
	{
		++len1;
		index2 = index2->_next;
	}
	index1 = root1; index2 = root2;
	if (len1 > len2)
	{
		int dif = len1 - len2;
		while (dif--)
			index1 = index1->_next;
	}
	else
	{
		int dif = len2 - len1;
		while (dif--)
			index2 = index2->_next;
	}
	while (index1 != index2)
	{
		index1 = index1->_next;
		index2 = index2->_next;
	}
	system("pause");
	return 0;
}