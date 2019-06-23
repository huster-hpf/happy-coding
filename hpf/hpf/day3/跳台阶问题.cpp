#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> step(n + 1, 0);
	for (int i = 1; i <= n; ++i)
	{
		if (i <= 2)
			step[i] = i;
		else
			step[i] = step[i - 1] + step[i - 2];
	}
	cout << step[n] << endl;
	system("pause");
	return 0;
}