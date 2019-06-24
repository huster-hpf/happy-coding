#include <iostream>
using namespace std;
struct TreeNode
{
	int _val;
	TreeNode *_left, *_right;
	TreeNode(int x) :_val(x), _left(NULL), _right(NULL) {}
};
void reverse_tree(TreeNode *root)
{

	if (root)
		return;
	swap(root->_left, root->_right);
	reverse_tree(root->_left);
	reverse_tree(root->_right);
}
int main()
{
	TreeNode *root;
	reverse_tree(root);
	system("pause");
	return 0;
}