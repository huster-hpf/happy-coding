#include <iostream>
#include <vector>
using namespace std;
vector<int> vec;
int sum = 0, target;
struct TreeNode
{
	int _val;
	TreeNode *_left;
	TreeNode *_right;
	TreeNode(int x = 0) :_val(x), _left(NULL), _right(NULL) {}
};
void dfs(TreeNode *ptr)
{
	vec.push_back(ptr->_val);
	sum += ptr->_val;
	if (ptr->_left == NULL && ptr->_right == NULL)
	{
		if (sum == target)
		{
			for (auto a : vec)
				cout << a << '\t';
			cout << endl;
		}
	}
	else
	{
		if (ptr->_left != NULL)
			dfs(ptr->_left);
		if (ptr->_right != NULL)
			dfs(ptr->_right);
	}
	vec.pop_back();
	sum -= ptr->_val;
}
int main()
{
	int temp, target;
	TreeNode *root;
	cin >> target;
	dfs(root);
	system("pause");
	return 0;
}