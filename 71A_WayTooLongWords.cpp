#include <iostream>

int main()
{
	unsigned n;

	std::cin >> n;

	for(int i = 0; i < n; ++i)
	{
		std::string str;

		std::cin >> str;

		if(str.size() > 10)
		{
			std::cout << str[0];
			
			std::cout << str.size() - 2;	

			std::cout << str[str.size() - 1] << std::endl;
		} else
		{
			std::cout << str << std::endl;
		}
	}
}
