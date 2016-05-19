#include <iterator>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
	vector<int> coll;

	// runtime error 对没有有效元素的位置操作符*或->会发生运行时错误
	//cout << *coll.begin();

	//insert elements from 1 to 9
	for (int i=1; i<=9; ++i)
	{
		coll.push_back(i);
	}

	//print all elements in reverse order
	copy(coll.crbegin(), coll.crend(), ostream_iterator<int>(cout, " "));
	cout << endl;
	
	// runtime error
//	cout << *coll.crend();
	return 0;
}