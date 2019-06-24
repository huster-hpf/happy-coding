#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	vector<int> vec_in;
	int temp;
	while (cin >> temp)
	{
		vec_in.push_back(temp);
	}
	int left = 0, right = vec_in.size() - 1;
	int res = 0;
	while (vec_in[left] > vec_in[right])
	{
		if (right - left == 1)
		{
			res = vec_in[right];
			break;
		}
		int mid = (left + right) / 2;
		if (vec_in[left] <= vec_in[mid])
			left = mid;
		if (vec_in[mid] <= vec_in[right])
			right = mid;
		if (vec_in[left] == vec_in[mid] && vec_in[mid] == vec_in[right])
		{
			res = *(min_element(vec_in.begin() + left, vec_in.begin() + right + 1));
		}
	}
	cout << res << endl;
	system("pause");
	return 0;
}