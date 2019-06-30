#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int target;
	vector<pair<int, int>> res;
	cin >> target;
	int slow = 1, fast = 1;
	int sum = 1;
	while (fast <= target / 2 + 1)
	{
		if (sum == target)
		{
			res.push_back({ slow,fast });
			++fast;
			sum += fast; 
		}	
		else if (sum < target)
		{
			++fast;
			sum += fast;			
		}	
		else
		{
			sum -= slow;	
			++slow;
		}			
	}
	for (int i = 0; i < res.size(); ++i)
	{
		if (res[i].first < res[i].second)
		{
			for (int j = res[i].first; j <= res[i].second; ++j)
			{
				cout << j << '\t';
			}
		}	
		cout << endl;
	}
	system("pause");
	return 0;
}