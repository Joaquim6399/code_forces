#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
	string s;
	cin >> s;
	
	int cnt = 0;
	for(int i = 0; i < s.size(); ++i) {
		if(s[i] > 90) {
			++cnt;	
		}	
	}

	if((s.size() - cnt) > cnt) {
		for(auto &c : s) {
			c = toupper(c);	
		}	
	} else {
		for(auto &c : s) {
			c = tolower(c);	
		}	
	}

	cout << s << endl;
}
