#include <iostream>
#include <vector>
using namespace std;
struct TreeNode
{
	int val;
	TreeNode *left, *right;
	TreeNode(int x = 0) :val(x), left(NULL), right(NULL) {}
};
vector<int> vec_pre = { 1,2,4,7,3,5,6,8 };
vector<int> vec_mid = { 4,7,2,1,5,3,8,6 };
TreeNode *build_tree(int start_pre, int end_pre, int start_mid, int end_mid)
{
	if (start_pre > end_pre)
		return NULL;
	TreeNode *root = new TreeNode(vec_pre[start_pre]);
	int size = find(vec_mid.begin(), vec_mid.end(), vec_pre[start_pre]) - vec_mid.begin() - start_mid;
	root->left = build_tree(start_pre + 1, start_pre + size, start_mid, start_mid + size - 1);
	root->right = build_tree(start_pre + size + 1, end_pre, start_mid + size + 1, end_mid);
	return root;
}
void print_after_tree(TreeNode *root)
{
	if (root==NULL)
		return;
	print_after_tree(root->left);
	print_after_tree(root->right);
	cout << root->val << '\t';
}
int main()
{
	TreeNode *root = build_tree(0, vec_pre.size() - 1, 0, vec_mid.size() - 1);
	print_after_tree(root);
	system("pause");
	return 0;
}