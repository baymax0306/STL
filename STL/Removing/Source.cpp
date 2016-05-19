#include <algorithm>
#include <iterator>
#include <list>
#include <iostream>
using namespace std;

int main()
{
	list<int> coll;

	//insert elements from 6 to 1 and 1 to 6
	for (int i=1; i<=6; ++i)
	{
		coll.push_front(i);
		coll.push_back(i);
	}

	//print all elements of the collection
	cout << "pre: ";
	copy(coll.cbegin(), coll.cend(), ostream_iterator<int>(cout, " "));
	cout << endl;

	//remove all elements with value 3
	//remove会返回一个新的终点
	list<int>::iterator end = remove(coll.begin(), coll.end(), 3);

	//print all elements of the collection
	cout << "post: ";
	copy(coll.cbegin(), coll.cend(), ostream_iterator<int>(cout, " "));

	cout << endl;
	copy(coll.begin(), end, ostream_iterator<int>(cout, " "));
	cout << endl;
	return 0;
}