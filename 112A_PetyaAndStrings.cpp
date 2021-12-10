#include <iostream>
#include <string>

using std::string;

int main()
{
	string s1, s2;

	
	std::cin >> s1 >> s2;

	unsigned size = s1.size();

	int comp = 0;

	for(int i = 0; i < size; ++i)	
	{
		char c1, c2;

		c1 = s1[i];
		c2 = s2[i];
		
		//see if its CAPS if it is turn it to lower

		if(c1 < 97)
			c1 = c1 + 32; 

		if(c2 < 97)
			c2 = c2 + 32;

		//compare, if equal nothing
		if(c1 == c2)
		{
			continue;
		} else if(c1 < c2)
		{
			comp = -1;	
			break;

		} else if(c1 > c2)
		{
			comp = 1;
			break;	
		}	

	}	

	std::cout << comp << std::endl;
}
