#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int temp;
	vector<int> vec;
	while (cin >> temp)
	{
		vec.push_back(temp);
	}
	int res = INT_MIN;
	int sum = 0;
	for (auto a : vec)
	{
		sum += a;
		res = max(sum, res);
		if (sum < 0)
			sum = 0;	
	}
	cout << res << endl;
	system("pause");
	return 0;
}