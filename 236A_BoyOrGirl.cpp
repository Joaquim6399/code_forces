#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::vector;

bool findInVector(vector<char> vec, char target) {
	bool found = false;

	for(int i = 0; i < vec.size(); ++i) {
		if( vec[i] == target) {
			found = true;
			return found;	
		}
		
	}

	return found;
}
int main() {
	string username;

	cin >> username;

	vector<char> seenChars;

	const int SIZE = username.size();
	
	int cnt = 0;

	for(int i = 0; i < SIZE; ++i) {
		if(!findInVector(seenChars, username[i])) {
			cnt += 1;					
			seenChars.push_back(username[i]);
		}
				
	}	

	if(cnt % 2 == 0) {
		cout << "CHAT WITH HER!" << endl;	
	} else {
		cout << "IGNORE HIM!" << endl;
	}
	
	return 0;
}
