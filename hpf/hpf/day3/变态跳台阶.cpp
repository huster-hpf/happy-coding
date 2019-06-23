#include <iostream>
using namespace std;
int main()
{
	int n, res = 1;
	cin >> n;
	while (--n)
		res *= 2;
	cout << res << endl;
	system("pause");
	return 0;
}