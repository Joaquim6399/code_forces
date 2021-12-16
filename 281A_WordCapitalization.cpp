#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	string str;
	cin >> str;

	str[0] = toupper(str[0]);

	cout << str << endl;
}
