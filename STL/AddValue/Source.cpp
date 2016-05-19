#include <list>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

template <typename T>
void PrintElement(const T& coll, string str="")
{
	cout << str;
	typename T::const_iterator pos;		//C++11前的版本要加typename关键字
	for (pos=coll.cbegin(); pos!=coll.cend(); ++pos)
	{
		cout << *pos << " ";
	}
	cout << endl;
}

class CAddValue
{
public:
	CAddValue(int v) : m_value(v)
	{}
	void operator() (int& elem) const
	{
		elem += m_value;
	}
private:
	int m_value;

};
int main()
{
	list<int> coll;
	for (int i=1; i<=9; ++i)
	{
		coll.push_back(i);
	}
	PrintElement(coll, "initialized: ");

	for_each(coll.begin(), coll.end(), CAddValue(10));

	PrintElement(coll, "after adding 10: ");

	for_each(coll.begin(), coll.end(), CAddValue(*coll.begin()));

	PrintElement(coll, "after adding the first element: ");

	return 0;
}