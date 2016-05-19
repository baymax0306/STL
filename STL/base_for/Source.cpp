#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> coll;
	for (int i=0; i<100; i+=2)
	{
		coll.push_back(i);
	}

	for (auto elm : coll)
	{
		cout << elm << endl;
	}
	return 0;
}