#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
	int n;
	cin >> n;

	string str;
	cin >> str;


	int count = 0;
	for(int i = 0; i < n; ++i) {

		if(str[i] == str[i+1])
		{
			count += 1;	
		}
	}		
			


	cout << count << endl;


}
