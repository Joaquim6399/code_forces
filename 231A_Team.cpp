#include <iostream>

int main()
{
	unsigned n;

	std::cin >> n;
	
	int val = 0;
	int sum = 0;

	for(int i = 0; i < n; ++i)
	{
		int cnt = 0;

		for(int j = 0; j < 3; ++j)
		{
			std::cin >> val;

			if(val == 1)
			{
				++cnt;
			}
			
					
		}

		if(cnt >= 2)
		{
			sum += 1;	
		}

	}

	std::cout << sum << std::endl;
}
