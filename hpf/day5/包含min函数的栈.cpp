#include <iostream>
#include <stack>
#include <map>
using namespace std;
template<typename T>
class MinStack
{
private:
	stack<T> _sta1;
	stack<T> _sta2;
public:
	void push(T x)
	{
		_sta1.push(x);
		if (_sta2.empty() || _sta2.top() >= x)
		{
			_sta2.push(x);
		}
	}
	void pop()
	{	
		if(_sta2.top()==_sta1.top())
		{
			_sta2.pop();
		}
		_sta1.pop();
	}
	T top()
	{
		return _sta1.top();
	}
	T min()
	{
		return _sta2.top();
	}
};
int main()
{
	MinStack<int> test;
	test.push(3);
	cout << test.min() << endl;
	test.push(4);
	cout << test.min() << endl;
	test.push(2);
	cout << test.min() << endl;
	test.push(1);
	cout << test.min() << endl;
	test.pop();
	cout << test.min() << endl;
	test.pop();
	cout << test.min() << endl;
	test.push(0);
	cout << test.min() << endl;
	system("pause");
	return 0;
}