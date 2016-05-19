#include <vector>
#include <list>
#include <iostream>
using namespace stlport;
//#define _STLP_USE_DYNAMEIC_LIB
//#define _STLP_DEBUG
#define _STLP_USE_STATIC_LIB

int main()
{
	vector<int> test;
	test.push_back(1);

	list<int> coll2;
	coll2.push_back(2);

	for (auto iter=coll2.begin(); iter!=coll2.end(); ++iter)
	{
		cout << *iter << endl;
	}
	return 0;
}
