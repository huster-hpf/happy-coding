#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> vec_in;
	vector<int> vec_out;
	int n, temp;
	cin >> n;
	while (n--)
	{
		cin >> temp;
		vec_in.push_back(temp);
	}
	temp = 1;
	vector<int> vec_temp1(1, temp);
	for (int i = 0; i < vec_in.size() - 1; ++i)
		vec_temp1.push_back(vec_temp1.back()*vec_in[i]);
	temp = 1;
	vector<int> vec_temp2(1, temp);
	for (int i = vec_in.size() - 1; i > 0; --i)
		vec_temp2.push_back(vec_temp2.back()*vec_in[i]);
	for (int i = 0; i < vec_in.size(); ++i)
		vec_out.push_back(vec_temp1[i] * vec_temp2[vec_in.size() - 1 - i]);
	for (auto a : vec_out)
		cout << a << '\t';
	system("pause");
	return 0;
}