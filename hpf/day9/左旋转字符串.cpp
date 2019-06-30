#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str;
	int n;
	cin >> str >> n;
	n %= str.size();
	string str_temp(str, 0, n);
	str.erase(0, n);
	str.append(str_temp);
	cout << str << endl;
	system("pause");
	return 0;
}