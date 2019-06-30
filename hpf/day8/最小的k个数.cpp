#include <iostream>
#include <vector>
using namespace std;
int k = 0;
int portion(vector<int> &vec, int beg, int en)
{
	int key_pos = rand() % (en + 1 - beg) + beg;
	int key = vec[key_pos];
	int index = beg;
	swap(vec[key_pos], vec[en]);
	for (int i = beg; i < en; ++i)
	{
		if (vec[i] < key)
		{
			swap(vec[index++], vec[i]);
		}
	}
	swap(vec[index], vec[en]);
	return index;
}
void quicksort(vector<int> &vec, int beg, int en)
{
	if (beg >= en)
		return;
	int pos=portion(vec, beg, en);
	if (pos == k - 1)
		return;
	else if (pos > k - 1)
		quicksort(vec, beg, pos - 1);
	else
		quicksort(vec, pos+1, en);
}
int main()
{
	vector<int> vec;
	int temp;
	cin >> k;
	while (cin >> temp)
		vec.push_back(temp);
	quicksort(vec, 0, vec.size() - 1);
	for (int i = 0; i < k; ++i)
		cout << vec[i] << '\t';
	cout << endl;
	system("pause");
	return 0;
}