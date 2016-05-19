#include <set>
#include <deque>
#include <string>
#include <algorithm>
#include <iterator>
#include <functional>
#include <iostream>
using namespace std;
using namespace std::placeholders;

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
}

int main()
{
	set<int, greater<int>> coll1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	deque<int> coll2;

	// note: due to the sorting criterion greater<>() elements have reverse order:
	PrintElement(coll1, "initialized: ");

	//transform all elements into coll2 by multiplying them with 10
	transform(coll1.cbegin(), coll1.cend(), back_inserter(coll2), bind(multiplies<int>(), _1, 10));
	PrintElement(coll2, "transformed: ");

	//replace value equal to 70 with 42
	replace_if(coll2.begin(), coll2.end(), bind(equal_to<int>(), _1, 70), 42);
	PrintElement(coll2, "replaced: ");

	//remove all elements with values between 50 and 80
	coll2.erase(remove_if(coll2.begin(), coll2.end(), bind(logical_and<bool>(), bind(greater_equal<int>(), _1, 50),
				bind(less_equal<int>(), _1, 80))), coll2.end());
	PrintElement(coll2, "removed: ");

	return 0;

	return 0;
}   

