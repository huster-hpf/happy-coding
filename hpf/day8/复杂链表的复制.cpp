#include <iostream>
#include <map>
using namespace std;
struct RandomListNode 
{
	int _val;
	RandomListNode *_next, *_random;
	RandomListNode(int x = 0) :_val(x), _next(NULL), _random(NULL) {}
};
RandomListNode *clone(RandomListNode *phead)
{
	RandomListNode *res=new RandomListNode();
	RandomListNode *index1 = res;
	RandomListNode *index2 = phead;
	map<RandomListNode *, RandomListNode *> m_check;
	while (index2->_next)
	{
		index1->_next = new RandomListNode(index2->_next->_val);
		index1->_next = index2->_next->_random;
		index1 = index1->_next;
		index2 = index2->_next;
	}
	index1 = res->_next;
	index2 = phead->_next;
	while (index1)
	{
		m_check[index2] = index1;
		index1 = index1->_next;
		index2 = index2->_next;
	}
	index1 = res->_next;
	index2 = phead->_next;
	while (index1)
	{
		index1->_random = m_check[index2->_random];
		index1 = index1->_next;
		index2 = index2->_next;
	}
}
int main()
{
	RandomListNode *phead;
	RandomListNode *res = clone(phead);
	system("pause");
	return 0;
}