#include <iostream>
#include <string>
using namespace std;
int StrToInt(string &str)
{
	int res = 0;
	bool flag = true;
	for (auto a : str)
	{
		if (a == ' ')
			continue;
		else if (a == '-' || a == '+')
		{
			flag = a == '+' ? true : false;
		}
		else if (a <= '9'&&a >= '0')
			res = res * 10 + (a - '0');
		else
		{
			res = 0;
			return res;
		}
	}
	return res;
}
int main()
{
	string str_in;
	cin >> str_in;
	int res = StrToInt(str_in);
	cout << res << endl;
	system("pause");
	return 0;
}