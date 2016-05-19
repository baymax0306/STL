/*
	���������÷�

*/
#include <iterator>
#include <list>
#include <algorithm>
#include <deque>
#include <vector>
#include <set>
#include <iostream>
using namespace std;

int main()
{
	list<int> coll1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	// copy the elements of coll1 into coll2 by appeding them
	// back_inserter ������������ĩ�ˣ� �ڲ�����push_back()
	vector<int> coll2;
	copy(coll1.cbegin(), coll1.cend(), back_inserter(coll2));
	
	// vector������������front_inserter����������Ϊ���ڲ�û��push_front()��Ա
	//copy(coll1.cbegin(), coll1.cend(), front_inserter(coll2));
	
	// copy the elements of coll1 into coll3 by inserting them at the front
	// reverses the order of the elements
	// front_inserter ������������ǰ��, �ڲ�����push_front()
	deque<int> coll3;
	copy(coll1.cbegin(), coll1.cend(), front_inserter(coll3));

	// copy elements of coll1 into coll4
	// only inserter that works for associative collections
	// inserter һ���Ե�����,�ڲ����ó�Ա����insert()
	set<int> coll4;
	copy(coll1.cbegin(), coll1.cend(), inserter(coll4, coll4.begin()));
	return 0;
}