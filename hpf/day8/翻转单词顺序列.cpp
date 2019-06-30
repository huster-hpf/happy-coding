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
	int beg = 0;
	for (int i = 0; i < str_in.size(); ++i)
	{
		if (i != 0 && (isalpha(str_in[i - 1])) && (!isalpha(str_in[i])))
		{
			vec_str.push_back(str_in.substr(beg, i - beg + 1));
			beg = i;
			if (str_in[i] != ' ')
				beg++;
		}
	}
	vec_str.push_back(str_in.substr(beg + 1, str_in.size() - beg));
	reverse(vec_str.begin(), vec_str.end());
	for (auto a : vec_str)
		res += a;
	cout << res;
	system("pause");
	return 0;
}