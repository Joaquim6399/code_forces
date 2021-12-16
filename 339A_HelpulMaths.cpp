#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string str;

	cin >> str;

	int ones = 0, twos = 0, threes = 0;

	for(int i = 0; i < str.size(); ++i)
	{
		if(i % 2 == 0)
		{
			char c = str[i];

			switch(c)
			{
				case '1':
					++ones;
					break;
				case '2':
					++twos;
					break;
				case '3':
					++threes;
					break;

						
			}
		}
	}
	
	string result;
	
	for(int i = 0; i < ones; ++i)
	{
		result += '1';
		result += '+';
	}


	for(int i = 0; i < twos; ++i)
	{
		result += '2';
		result += '+';
	}


	for(int i = 0; i < threes; ++i)
	{
		result += '3';
		result += '+';
	}
	
	string newResult;	
	for(int i = 0; i < result.size() - 1; ++i)
	{
		newResult += result[i];	
	}
	cout << newResult << endl;
}
