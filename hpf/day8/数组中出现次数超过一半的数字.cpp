//--------solution1--------------
//#include <iostream>
//#include <vector>
//using namespace std;
//int main()
//{
//	vector<int> vec;
//	int temp;
//	while (cin >> temp)
//	{
//		vec.push_back(temp);
//	}
//	int count = 0;
//	int val = 0;
//	for (int a : vec)
//	{
//		if (count == 0 || val == a)
//		{
//			val = a;
//			++count;
//		}
//		else
//		{
//			--count;
//		}
//	}
//	count = 0;
//	for (auto a : vec)
//	{
//		if (val == a)
//			++count;
//	}	
//	cout << (count > vec.size() / 2 ? val : 0) << endl;
//	system("pause");
//	return 0;
//}



//--------solution2--------------
#include <iostream>
#include <vector>
using namespace std;
vector<int> vec;
int portion(vector<int> &vec, int beg,int en)
{
	int key_pos = rand() % (en + 1 - beg) + beg;
	int key = vec[key_pos];
	swap(vec[en], vec[key_pos]);
	int index = beg;
	for (int i = beg; i < en; ++i)
	{
		if (vec[i] <= key)
			swap(vec[i], vec[index++]);
	}
	swap(vec[en], vec[index]);
	return index;
}
void MyQuicksort(vector<int> &vec, int beg,int en)
{
	if (beg >= en)
		return;
	int pos = portion(vec, beg, en);
	if (pos > vec.size())
		MyQuicksort(vec,beg, pos);
	else
		MyQuicksort(vec, pos, en);
}
int main()
{
	int temp;
	while (cin >> temp)
	{
		vec.push_back(temp);
	}
	MyQuicksort(vec, 0, vec.size());
	int val = vec[vec.size() / 2];
	int count = 0;
	for (auto a : vec)
		if (a == val)
			++count;
	cout << (count > vec.size() / 2 ? val : 0) << endl;
	system("pause");
	return 0;
}