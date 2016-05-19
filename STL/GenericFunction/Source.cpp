/*************************************************
// Copyright (C), 2015-2020, kokoonmed. Co., Ltd.
// <File name> 		Source.cpp
// <History>
// <author> 		zwc
// <time>			2016/05/08
// <version> 		1.0 
// <desc> 			build this moudle 
*************************************************/

#include <iostream>
#include <string>
#include <vector>
/*************************************************
// Method: 		PrintElements
// Description: 
// Author: 		zwc
// Date: 		2016/05/08
// Returns: 	
// Parameter: 	
// History:		
*************************************************/

template<typename T>
void PrintElements(const T& coll, const std::string& str="")
{
	//before C++11
	/*typename T::const_iterator pos;
	for (pos=coll.begin(); pos!=coll.end(); ++pos)
	{
		std::cout << *pos << ' ';
	}*/

	std::cout << str;
	for (const auto& elem : coll)
	{
		std::cout << elem << ' ';
	}
	std::cout << std::endl;
}

int main()
{
	std::vector<int> coll = {1, 3, 5, 7, 9, 11, 13, 15, 17};
	PrintElements(coll, "all elements: ");
	return 0;
}