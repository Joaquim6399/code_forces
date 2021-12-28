#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, t;
    cin >> s;
    cin >> t;

    bool isReversed = true;
    for(int i = 0, j = s.size() - 1; i < s.size(); ++i, --j) {
        if(s[i] != t[j]) {
            isReversed = false;
            break;
        }
    }

    if(isReversed)
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;

}