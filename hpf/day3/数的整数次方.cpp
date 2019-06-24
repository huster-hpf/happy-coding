#include <iostream>
using namespace std;
double Power(double ba, int exp)
{
	if (exp == 1)
	{
		return ba;
	}
	double temp = Power(ba, exp / 2);
	if (exp & 1)
		return temp * temp * ba;
	else
		return temp * temp;
}
int main()
{
	double ba;
	int exp;
	cin >> ba >> exp;
	cout << Power(ba, exp);
	system("pause");
	return 0;
}