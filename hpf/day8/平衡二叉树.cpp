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
int IsAVL(TreeNode *root)
{
	if (root == NULL)
	{
		return 0;
	}
	int left = IsAVL(root->_left);
	int right = IsAVL(root->_right);
	if (left == -1 || right == -1)
		return -1;
	return abs(left - right) > 1 ? -1 : 1 + max(left, right);
}
int main()
{
	TreeNode *root;
	cout << (IsAVL(root) == -1 ? "false" : "true") << endl;
	system("pause");
	return 0;
}