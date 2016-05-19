#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector<int> coll = {10, 23, 13, 9, 18, 35, 25};
	
	vector<int>::iterator pos, pos25, pos35;
	pos = find_if(coll.begin(), coll.end(), [](int i){return i==25 || i==35;});
	if (pos == coll.end())
	{
		cout << "no element with value 25 or 35 found." << endl;
		return 0;
	}
	else if (25 == *pos)
	{
		pos25 = pos;
		pos35 = find(++pos, coll.end(), 35);
	}
	else
	{
		pos35 = pos;
		pos25 = find(++pos, coll.end(), 25);
	}
	if (pos25 < pos35)		// 随机访问迭代器才可以这样用
	{
		cout << "25 is before the 35." << endl;
	}
	else
	{
		cout << "35 is before the 25." << endl;
	}
	return 0;
}