#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str_in, str_out;
	getline(cin, str_in);
	for (int i = 0; i < str_in.size(); ++i)
	{
		if (str_in[i] == ' ')
		{
			str_out += "%20";
		}
		else
			str_out.push_back(str_in[i]);
	}
	cout << str_out << endl;
	system("pause");
	return 0;
}
