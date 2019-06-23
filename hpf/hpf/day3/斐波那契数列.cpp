#include <iostream>
#include <vector>
using namespace std;
int main()
{	
	vector<int> vec;
	int n;
	cin >> n;
	for (int i = 0; i <= n; ++i)
	{
		if (i <= 1)
			vec.push_back(i);
		else
			vec.push_back(vec[i - 1] + vec[i - 2]);
	}
	cout << vec.back() << endl;
	system("pause");
	return 0;
}