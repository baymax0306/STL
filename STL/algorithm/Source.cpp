#include <algorithm>
#include <vector>
#include <iostream>
#include <functional>
using namespace std;
bool Greater(int elem1, int elem2)
{
	return elem1 > elem2;
}

int main()
{
	vector<int> coll = {2, 5, 4, 1, 6, 3};
	auto minpos = min_element(coll.cbegin(), coll.cend());
	cout << "min: " << *minpos << endl;
	auto maxpos = max_element(coll.cbegin(), coll.cend());
	cout << "max: " << *maxpos << endl;
	sort(coll.begin(), coll.end());
	cout << "after sort: ";
	for (auto iter=coll.begin(); iter!=coll.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;
	auto pos3 = find(coll.begin(), coll.end(), 3);
	reverse(pos3, coll.end());
	cout << "after reverse: ";
	for (auto elem : coll)
	{
		cout << elem << " ";
	}
	cout << endl;

	cout << "after sort by greater: ";
	//sort(coll.begin(), coll.end(), Greater);
	sort(coll.begin(), coll.end(), greater<int>());
	for (auto elem : coll)
	{
		cout << elem << " ";
	}
	cout << endl << endl;
	return 0;
}