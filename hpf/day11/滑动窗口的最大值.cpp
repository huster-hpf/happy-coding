#include <iostream>
#include <vector>
#include <deque>
using namespace std;
int main()
{
	int n, temp, k;
	cin >> n >> k;
	vector<int> vec;
	while (n--)
	{
		cin >> temp;
		vec.push_back(temp);
	}
	deque<pair<int, int>> max_que;
	for (int i = 0; i < k; ++i)
	{
		if (max_que.empty() || max_que.back().first >= vec[i])
		{
			max_que.push_back({ vec[i],i });
		}
		else
		{
			while (max_que.back().first < vec[i])
			{
				max_que.pop_back();
			}
			max_que.push_back({ vec[i],i });
		}
	}
		

	vector<int> res;
	for (int i = 0; i + k + 1 < vec.size(); ++i)
	{
		res.push_back(max_que.front.front);
		if (i == max_que.front().second)
			max_que.pop_front();
		while (max_que.back().first < vec[i + k + 1])
		{
			max_que.pop_back();
		}
		max_que.push_back({ vec[i + k + 1],i });
	}
	system("pause");
	return 0;
}