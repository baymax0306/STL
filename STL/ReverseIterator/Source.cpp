#include <iterator>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
	vector<int> coll;

	// runtime error ��û����ЧԪ�ص�λ�ò�����*��->�ᷢ������ʱ����
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