#include <iostream>
#include <stack>
using namespace std;
template<typename T>
class My_queue
{
private:
	stack<T> in;
	stack<T> out;
public:
	My_queue() {}
	~My_queue() {}
	void push(T x)
	{
		in.push(x);
	}
	void pop()
	{
		if (!out.empty())
			out.pop();
		else
		{
			while (!in.empty())
			{
				out.push(in.top());
				in.pop();
			}
			out.pop();
		}
	}
	int front()
	{
		if (in.empty())
			return out.top();
		else
		{
			while (!in.empty())
			{
				out.push(in.top());
				in.pop();
			}
			return out.top();
		}
	}
};
int main()
{
	My_queue<int> test;
	test.push(1);
	cout << test.front() << endl;
	test.push(2);
	cout << test.front() << endl;
	test.push(3);
	cout << test.front() << endl;
	test.pop();
	cout << test.front() << endl;
	test.pop();
	cout << test.front() << endl;
	system("pause");
	return 0;
}