#include <iostream>
#include <queue>
#include <vector>
using namespace std;
struct TreeNode
{
	int _val;
	TreeNode *_left, *_right;
	TreeNode(int x = 0) :_left(NULL), _right(NULL) {}
};
int main()
{
	TreeNode *root;
	queue<TreeNode *> que;
	que.push(root);
	while (!que.empty())
	{
		int size = que.size();
		vector<int> vec;
		for (int i = 0; i < size; ++i)
		{
			TreeNode *temp = que.front();
			que.pop();
			vec.push_back(temp->_val);
			if (temp->_left)
				que.push(temp->_left);
			if (temp->_right)
				que.push(temp->_right);
		}
		for (auto a : vec)
			cout << a << '\t';
		cout << endl;
	}
	system("pause");
	return 0;
}