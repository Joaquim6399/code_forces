#include <iostream>

int main()
{
	int n, k, score;

	std::cin >> n >> k;
	
	int cnt = 0, threshold;

	for(int i = 1; i <= n; ++i)
	{
		std::cin >> score;

		if(i < k && score > 0)
		{
			++cnt;	
		} else if(i == k && score > 0)
		{
			threshold = score;
			++cnt;	
		} else
		{
			if(score > 0 && score >= threshold)
			{
				++ cnt;
			}	
		}	
	}

	std::cout << cnt << std::endl;
}
