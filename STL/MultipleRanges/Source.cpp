#include <vector>
#include <list>
#include <iostream>
#include <deque>
using namespace std;

int main()
{
	list<int> coll1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	vector<int> coll2; //目标区间没有足够的元素被覆写

	//runtime error.
	//copy(coll1.cbegin(), coll1.cend(), coll2.begin());

	coll2.resize(coll1.size());
	copy(coll1.begin(), coll1.end(), coll2.begin());
	cout << "coll2: \n";
	for (auto iter=coll2.cbegin(); iter!=coll2.cend(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	deque<int> coll3(coll2.size());
	copy(coll2.cbegin(), coll2.cend(), coll3.begin());
	cout << "coll3: \n";
	for (auto element : coll3)
	{
		cout << element << " ";
	}
	cout << endl;
	return 0;
}