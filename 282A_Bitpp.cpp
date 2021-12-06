#include <iostream>

int main()
{
	unsigned n;

	std::cin >> n;
	
	std::string statement;
	int cnt = 0;
	for(int i = 0; i < n; ++i)
	{
		std::cin >> statement;

		if(statement[1] == '+')
		{
			++cnt;
		} else 
		{
			--cnt;
		}
	}

	std::cout << cnt << std::endl;

	return 0;
}
