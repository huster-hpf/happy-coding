#include <iostream>
#include <vector>
using namespace std;
struct TreeNode
{
	int _val;
	TreeNode *_left;
	TreeNode *_right;
	TreeNode(int x = 0) :_val(x), _left(NULL), _right(NULL) {}
};
vector<TreeNode *> res;
void mid_search(TreeNode *root)
{
	if (root == NULL)
		return;
	mid_search(root->_left);
	res.push_back(root);
	mid_search(root->_right);
}
int main()
{
	TreeNode *root;
	mid_search(root);
	res.front()->_left = NULL;
	for (int i = 0; i < res.size() - 1; ++i)
	{
		res[i]->_right = res[i + 1];
	}
	res.back()->_right = NULL;
	for (int i = res.size(); i >= 0; --i)
	{
		res[i]->_left = res[i - 1];
	}
	system("pause");
	return 0;
}