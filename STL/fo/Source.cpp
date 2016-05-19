#include <algorithm>
#include <string>
#include <iostream>
#include <functional>
#include <deque>

using namespace std;

template <typename T>
void PrintElement(const T& coll, string str="")
{
	cout << str << endl;
	typename T::const_iterator pos;
	for (pos=coll.cbegin(); pos!=coll.cend(); ++pos)
	{
		cout << *pos << " ";
	}
	cout << endl;
};

int main()
{
	deque<int> coll = {1, 2, 3 ,4, 5, 7, 11, 13, 17, 19};
	PrintElement(coll, "initialized: ");

	transform(coll.cbegin(), coll.cend(), coll.begin(), negate<int>());
	PrintElement(coll, "negated: ");

	transform(coll.cbegin(), coll.cend(), coll.cbegin(), coll.begin(), multiplies<int>());
	PrintElement(coll, "squared: ");

	return 0;
}