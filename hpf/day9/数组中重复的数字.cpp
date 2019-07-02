#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main()
{
	vector<int> vec_in;
	int n, temp;
	cin >> n;
	set<int> s_check;
	while (cin >> temp)
	{
		vec_in.push_back(temp);
	}
	for (auto a : vec_in)
	{
		if (s_check.find(a) != s_check.end())
		{
			cout << a << endl;
			break;
		}
	}
	system("pause");
	return 0;
}