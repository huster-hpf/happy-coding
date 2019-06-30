#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	string str_in;
	string res;
	vector<string> vec_str;
	getline(cin, str_in);
	cout << str_in << endl;
	int beg = -1;
	for (int i = 0; i < str_in.size(); ++i)
	{
		if (str_in[i] == ' ')
		{
			vec_str.push_back(str.substr(beg + 1, i - beg - 1);
			beg = i;
		}
	}
	for (auto a : vec_str)
		res += a;
	cout << res;
	system("pause");
	return 0;
}