#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> vec;
	int target, count=0;
	cin >> target;
	int left = 0, right = vec.size() - 1;
	int res_left, res_right;
	while (left < right)
	{
		int mid = ((right + 1 - left) >> 1) + left;
		if (vec[mid] < target)
			left = mid + 1;
		else
			right = mid;
	}
	res_left = left;
	int left = 0, right = vec.size() - 1;
	while (left < right)
	{
		int mid = ((right + 1 - left) >> 1) + left;
		if (vec[mid] > target)
			right = mid - 1;
		else
			left = mid;
	}
	res_right = right;
	cout << res_right + 1 - res_left << endl;
	system("pause");
	return 0;
}