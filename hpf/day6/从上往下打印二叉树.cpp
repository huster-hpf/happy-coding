#include <iostream>
#include <queue>
using namespace std;
struct TreeNode
{
	int _val;
	TreeNode* _left;
	TreeNode* _right;
};
void print_tree(TreeNode *root)
{
	queue<TreeNode *> que;
	que.push(root);
	while (!que.empty())
	{
		TreeNode *temp = que.front();
		que.pop();
		cout << temp->_val << '\t';
		if (temp->_left)
			que.push(temp->_left);
		if (temp->_right)
			que.push(temp->_right);
	}
}
int main()
{
	TreeNode *root;
	print_tree(root);
	system("pause");
	return 0;
}