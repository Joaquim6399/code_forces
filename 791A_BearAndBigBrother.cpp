#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
	int a, b;
	cin >> a >> b;

	int cnt = 0;
	while(a <= b)
	{
		a *= 3;
		b *= 2;
		cnt += 1;	
	}		

	cout << cnt << endl;
}
