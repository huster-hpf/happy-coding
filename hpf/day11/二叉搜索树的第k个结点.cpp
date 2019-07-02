#include <iostream>
#include <stack>
#include <vector>
using namespace std;
struct TreeNode
{
	int _val;
	TreeNode *_left, *_right;
	TreeNode(int x = 0): _val(x), _left(NULL), _right(NULL) {}
};
TreeNode *mid_search(TreeNode *root, int k)
{
	stack<TreeNode *> sta;
	vector<TreeNode *> res;
	sta.push(root);
	while (root || sta.empty())
	{
		while (root)
		{
			sta.push(root->_left);
			root = root->_left;
		}
		if (!sta.empty())
		{
			root = sta.top();
			sta.pop();
			res.push_back(root);
			root = root->_right;
		}
	}
	return res[k - 1];
}
int main()
{
	TreeNode *root;
	int k;
	cin >> k;
	TreeNode *res = mid_search(root, k);
	system("pause");
	return 0;
}