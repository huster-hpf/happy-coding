#include <iostream>
#include <set>
using namespace std;
set<char> s_check;
void insert(char ch)
{
	if (s_check.find(ch) != s_check.end())
		s_check.erase(ch);
	else
		s_check.insert(ch);
}
char FirstAppearingOnce()
{
	if (s_check.size())
		return *(s_check.begin());
	else
		return '*';
}
int main()
{
	int n = 5;
	char temp;
	while (n--)
	{
		cin >> temp;
		insert(temp);
	}
	cout << FirstAppearingOnce() << endl;
	system("pause");
	return 0;
}