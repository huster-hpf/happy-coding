#include <iostream>
#include <algorithm>
using namespace std;
struct TreeNode
{
	int _val;
	TreeNode *_left;
	TreeNode *_right;
	TreeNode(int x = 0) :_val(x), _left(NULL), _right(NULL) {}
};
int length_tree(TreeNode *root)
{
	if (root == NULL)
		return 0;
	int res = 1+max(length_tree(root->_left), length_tree(root->_right));
}
int main()
{
	TreeNode *root;
	int res = length_tree(root);
	system("pause");
	return 0;
}