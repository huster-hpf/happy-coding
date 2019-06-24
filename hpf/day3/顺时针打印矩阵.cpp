#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n, temp;
	cin >> n;
	vector<vector<int>> vec_in;
	for (int i = 0; i < n; ++i)
	{
		vector<int> vec_temp;
		for (int j = 0; j < n; ++j)
		{
			cin >> temp;
			vec_temp.push_back(temp);
		}
		vec_in.push_back(vec_temp);
	}
	for (int i = 0; 2 * i < n - 1; ++i)
	{
		int index_row = i;
		int index_col = i;
		while (index_col < n - 1 - i)
			cout << vec_in[index_row][index_col++] << '\t';	
		while (index_row < n - 1 - i)
			cout << vec_in[index_row++][index_col] << '\t';
		while (index_col > i)
			cout << vec_in[index_row][index_col--] << '\t';
		while (index_row > i)
			cout << vec_in[index_row--][index_col] << '\t';
	}
	if (n & 1)
		cout << vec_in[n / 2][n / 2] << endl;
	system("pause");
	return 0;
}