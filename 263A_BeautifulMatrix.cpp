#include <iostream>
#include <cstdlib>

int main()
{
	int rowI, columnJ;
	
	int num;
	for(int j = 0; j < 5; ++j)
	{
		for(int i = 0; i < 5; ++i)
		{
			std::cin >> num;
			if(num == 1)
			{
				rowI = i+1;
				columnJ = j+1;	
			}	
		}	
	}	
	
	int result = abs(rowI - 3) + abs(columnJ - 3);

	std::cout << result << std::endl;
}
