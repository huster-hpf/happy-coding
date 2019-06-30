#include <iostream>
#include <set>
#include <string>
using namespace std;
int main()
{
	string str;
	cin >> str;
	set<char> s_check;
	for (auto a : str)
	{
		if (s_check.find(a) == s_check.end())
			s_check.insert(a);
		else
			s_check.erase(a);
	}
	int i = 0;
	for (;i<str.size();++i)
	{
		if (s_check.find(str[i]) != s_check.end())
			break;
	}
	cout << (i == str.size() ? -1 : i);
	system("pause");
	return 0;
}