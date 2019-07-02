#include <iostream>
using namespace std;
struct TreeNode
{
	int _val;
	TreeNode *_left;
	TreeNode *_right;
	TreeNode(int x = 0) :_val(x), _left(NULL), _right(NULL) {}
};
bool IsMirroTree(TreeNode *_left, TreeNode *_right)
{
	if (_left == NULL && _right == NULL)
		return true;
	else if ((_left != NULL && _right == NULL) || (_left == NULL && _right != NULL))
		return false;
	else
	{
		if (_left->_val == _right->_val)
			return IsMirroTree(_left->_left, _right->_right) && IsMirroTree(_left->_right, _right->_left);
		else
			return false;
	}
}
int main()
{
	TreeNode *root;
	cout << IsMirroTree(root->_left,root->_right) << endl;
	system("pause");
	return 0;
}