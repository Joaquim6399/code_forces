#include <iostream>

int main()
{
	unsigned w;

	std::cin >> w;

	if(w >= 4 && w % 2 == 0)
	{
		std::cout << "YES" << std::endl;
	} else
	{
		std::cout << "No" << std::endl;	
	}
}
