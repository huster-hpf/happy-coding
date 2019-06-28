#include <iostream>
#include <vector>
using namespace std;
bool IsBtf(vector<int> vec,int beg,int en)
{
	if (beg >= en)
		return true;
	int temp = vec[en];
	int index = 0;
	while (vec[index++] < temp);

}
int main()
{
	vector<int> vec_in;
	int temp;
	while (cin >> temp)
		vec_in.push_back(temp);
	cout << IsBtf(vec_in, 0, vec_in.size() - 1) << endl;
	system("pause");
	return 0;
}