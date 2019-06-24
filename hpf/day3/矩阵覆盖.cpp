#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n;
	int res=1;
	cin >> n;
	vector<int> vec(n + 1, 0);
	for (int i = 1; i <= n; ++i)
	{
		if (i <= 2)
			vec[i] = i;
		else
			vec[i] = vec[i - 1] + vec[i - 2];
	}
	cout << vec.back() << endl;
	system("pause");
	return 0;
}