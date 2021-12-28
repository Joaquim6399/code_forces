#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
	int n, t;
	cin >> n >> t;

	string s;
	cin >> s;

	for(int i = 0; i < t; ++i) {
		for(int j = 0; j < n; ++j) {
			if(s[j] < s[j+1]) {
				s[j] = 'G';
				s[j+1] = 'B';

				++j;
			}
			
		} 
	}
	cout << s << endl;
}
