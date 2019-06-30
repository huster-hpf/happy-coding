#include <iostream>
#include <set>
using namespace std;
int main()
{
	int k;
	cin >> k;
	set<int> s_check = { 0 };
	int count = 1;
	int i = 1;
	for (; count < k; ++i)
	{
		if (s_check.find(i / 2) != s_check.end() || \
			s_check.find(i / 3) != s_check.end() || \
			s_check.find(i / 5) != s_check.end())
		{
			s_check.insert(i);
			++count;
		}		
	}
	cout << i << endl;
	system("pause");
	return 0;
}