#include <set>
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	typedef set<int> IntSet;
	IntSet sets;
	for (int i=0; i<100; ++i)
	{
		sets.insert(i);
	}
	ofstream of("D:\\sets.txt");
	if (of.bad())
	{
		cout << "open sets.txt faild.\n";
	}
	cout << "first insert: " << endl;
	copy(sets.cbegin(), sets.cend(), ostream_iterator<int>(of, "\n"));
	for (int i=50; i<110; ++i)
	{
		sets.insert(i);
	}
	cout << "\nsecond insert: " << endl;
	copy(sets.cbegin(), sets.cend(), ostream_iterator<int>(of, "\n"));
	return 0;
}