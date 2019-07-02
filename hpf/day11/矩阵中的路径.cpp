#include <iostream>
#include <vector>
#include <string>
using namespace std;
int row, col;
string str;
bool haspath(vector<vector<char>> &matrix, int row, int col, string str)
{
	vector<vector<bool>> m_check(row, vector<bool>(col, true));
	for(int i=0;i<row;++i)
		for (int j = 0; j < col; ++j)
		{
			if (search(matrix, i, j, str, 0, m_check))
				return true;
		}
	return false;
}
bool search(vector<vector<char>> matrix, int i, int j, string str, int index, vector<vector<bool>> m_check)
{
	if (index == str.size())
		return true;
	if (i >= 0 && j >= 0 && i < row&&j < col&&matrix[i][j] == str[index] && m_check[i][j] == true)
	{
		m_check[i][j] = false;
		return search(matrix, i - 1, j, str, 0, m_check) ||
			search(matrix, i + 1, j, str, 0, m_check) ||
			search(matrix, i, j - 1, str, 0, m_check) ||
			search(matrix, i, j + 1, str, 0, m_check);
	}
}
int main()
{
	
	cin >> row >> col >> str;
	vector<vector<char>> matrix(row, vector<char>(col, ' '));
	for(int i=0;i<row;++i)
		for (int j = 0; j < col; ++j)
		{
			char temp;
			cin >> temp;
			matrix[i][j] = temp;
		}
	cout << haspath(matrix, row, col, str) << endl;
	system("pause");
	return 0;
}