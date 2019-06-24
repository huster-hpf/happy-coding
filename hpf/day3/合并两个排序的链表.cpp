#include <iostream>
using namespace std;
struct Node
{
	int val;
	Node *next;
	Node(int x = 0) :val(x), next(NULL) {}
};
Node *Merge(Node *index1, Node *index2)
{
	Node *pre_res = new Node();
	Node *index = pre_res;
	while (index1 && index2)
	{
		if (index1->val > index2->val)
		{
			index->next = new Node(index2->val);
			index = index->next;
			index2 = index2->next;
		}
		else
		{
			index->next = new Node(index1->val);
			index = index->next;
			index1 = index1->next;
		}
	}
	while (index1)
	{
		index->next = new Node(index1->val);
		index = index->next;
		index1 = index1->next;
	}
	while (index2)
	{
		index->next = new Node(index2->val);
		index = index->next;
		index2 = index2->next;
	}
	return pre_res->next;
}
int main()
{
	Node *pre_index1 = new Node(), *pre_index2 = new Node();
	Node *index1 = pre_index1, *index2 = pre_index2;
	int temp;
	while (cin >> temp)
	{
		index1->next = new Node(temp);
	}
	while (cin >> temp)
	{
		index2->next = new Node(temp);
	}
	Node *res = Merge(pre_index1->next, pre_index2->next);
	while (res)
	{
		cout << res->val << '\t';
		res = res->next;
	}
	system("pause");
	return 0;
}