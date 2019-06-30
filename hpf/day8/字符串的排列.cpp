#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string str;
void dfs(int index)
{
	if (index == str.size() - 1)
	{
		cout << str << '\t';
		return;
	}	
	for (int i = index; i < str.size(); ++i)
	{
		if (i == index || str[i] != str[index])
		{
			swap(str[i], str[index]);
			dfs(index + 1);
			swap(str[i], str[index]);			
		}
	}
}
int main()
{
	cin >> str;
	sort(str.begin(), str.end());
	dfs(0);
	system("pause");
	return 0;
}