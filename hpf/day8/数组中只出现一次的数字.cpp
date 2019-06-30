//------solution1---------
//#include <iostream>
//#include <vector>
//using namespace std;
//int main()
//{
//	vector<int> vec = { 1,1,2,3,4,4,5,5 };
//	int res = 0;
//	for (int a : vec)
//		res ^= a;
//	int temp = 1;
//	while (temp <= res)
//	{
//		if (temp&res)
//			break;
//		temp <= 1;
//	}
//	int res1 = 0, res2 = 0;
//	for (int a : vec)
//	{
//		if (a&temp)
//			res1 ^= a;
//		if (!(a&temp))
//			res2 ^= a;
//	}
//	cout << res1 << res2 << endl;
//	system("pause");
//	return 0;
//}


//--------solution2-------
#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main()
{
	vector<int> vec = { 1,1,2,3,4,4,5,5 };
	set<int> s_check;
	for (auto a : vec)
	{
		if (s_check.find(a) == s_check.end())
			s_check.insert(a);
		else
			s_check.erase(a);
	}
	for (auto iter = s_check.begin(); iter != s_check.end(); ++iter)
		cout << *iter << '\t';
	cout << endl;
	system("pause");
	return 0;
}