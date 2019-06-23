#include <iostream>
using namespace std;
int main()
{
	int n, res = 0;
	cin >> n;
	while (n)
	{
		res++;
		n = n & (n - 1);
	}
	cout << res << endl;
	system("pause");
	return 0;
}