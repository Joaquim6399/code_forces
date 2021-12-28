#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int cnt = 0;
    for(char c : s) {
        if(c == 'A')
            cnt += 1;
    }

    if(cnt > (n - cnt))
        cout << "Anton" << endl;
    else if(cnt < (n - cnt))
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;
     
    return 0;
        
}