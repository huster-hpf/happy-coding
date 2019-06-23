#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> vec_in, vec_out;
	int temp;
	while (cin >> temp)
	{
		vec_in.push_back(temp);
	}
	for (int a : vec_in)
	{
		if (a & 1)
			vec_out.push_back(a);
	}
	for (int a : vec_in)
	{
		if (!(a & 1))
			vec_out.push_back(a);
	}
	for (int a : vec_out)
		cout << a << '\t';
	system("pause");
	return 0;
}