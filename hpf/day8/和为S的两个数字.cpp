#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int target, temp;
	cin >> target;
	vector<int> vec;
	while (cin >> temp)
		vec.push_back(temp);
	int left = 0, right = vec.size() - 1;
	pair<int, int> res;
	while (left < right)
	{
		if (vec[left] + vec[right] == target)
		{
			res.first = left;
			res.second = right;
			break;
		}
		else if (vec[left] + vec[right] < target)
			++left;
		else
			--right;
	}
	cout << vec[res.first] << '\t' << vec[res.second] << endl;
	system("pause");
	return 0;
}