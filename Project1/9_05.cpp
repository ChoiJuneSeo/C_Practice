#include <iostream>

#include "CList.h"

int main()
{
	CList<int> list;

	for (int i = 0; i < 4; ++i)
	{
		list.push_back(i);
	}
	// C printf
	std::cout << "�ȳ� " << 10 << std::endl;
	
	// C scanf
	int iInput = 0;
	std::cin >> iInput;

	return 0;
}