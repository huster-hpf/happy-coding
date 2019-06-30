#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
string cmp(string& str1, string& str2)
{
	return str1 + str2 < str2 + str1 ? str1 + str2 : str2 + str1;
}
int main()
{
	vector<string> vec_str;
	int temp;
	while (cin >> temp)
	{
		vec_str.push_back(to_string(temp));
	}
	sort(vec_str.begin(), vec_str.end());
	string res;
	for (auto a : vec_str)
	{
		res = cmp(res, a);
	}
	cout << res << endl;
	system("pause");
	return 0;
}