#include <iostream>
#include <stack>
#include <vector>
using namespace std;
bool IsPopOrder(vector<int> &push_vec, vector<int> &pop_vec)
{
	stack<int> sta;
	int i = 0;
	for (int a : pop_vec)
	{
		if (!sta.empty() && sta.top() == a)
		{
			sta.pop();
		}
		else
		{
			while (i < push_vec.size() && push_vec[i] != a)
				sta.push(push_vec[i++]);
			++i;
		}
	}
	return sta.empty();
}
int main()
{
	vector<int> push_vec, pop_vec;
	int n, temp;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> temp;
		push_vec.push_back(temp);
	}
	for (int i = 0; i < n; ++i)
	{
		cin >> temp;
		pop_vec.push_back(temp);
	}
	cout << IsPopOrder(push_vec, pop_vec) << endl;
	system("pause");
	return 0;
}