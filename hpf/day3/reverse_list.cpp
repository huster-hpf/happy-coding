#include <iostream>
#include <vector>
using namespace std;
struct Node
{
	int val;
	Node *next;
	Node(int x = 0) :val(x),next(NULL) {}	//nextÖ¸ÕëÖÃ¿ÕºÜÖØÒª
};
void print_list_reverse1(Node *index)
{
	vector<int> vec;
	while (index)
	{
		vec.push_back(index->val);
		index = index->next;
	}
	reverse(vec.begin(), vec.end());
	for (auto x : vec)
	{
		cout << x << '\t';
	}
	cout << endl;
}
void print_list_reverse2(Node *index)
{
	Node *head_pre = new Node(0);
	Node *head = head_pre->next;	
	while (index)
	{
		Node *temp = index;
		index = index->next;
		temp->next = head;
		head_pre->next = temp;
		head = temp;
	}
	while (head)
	{
		cout << head->val << '\t';
		head = head->next;
	}
	cout << endl;
}
void print_list_reverse3(Node *index)
{
	Node *p = index;
	Node *q = index->next;
	p->next = NULL;
	while (q)
	{
		Node* temp = q->next;
		q->next = p;
		p = q;
		q = temp;
	}
	while (p)
	{
		cout << p->val << '\t';
		p = p->next;
	}
	cout << endl;
}
int main()
{
	Node *pre_head = new Node(0);
	Node *index = pre_head;
	int temp;
	while (cin >> temp)
	{
		index->next = new Node(temp);
		index = index->next;
	}
//	print_list_reverse1(pre_head->next);
//	print_list_reverse2(pre_head->next);
	print_list_reverse3(pre_head->next);
	system("pause");
	return 0;
}
