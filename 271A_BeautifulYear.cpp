#include <iostream>
#include <vector>
using namespace std;

bool distinctYearDigits(int year);
bool findInList(int target, vector<int> intVector);

int main() {
    int y;
    cin >> y;

    while(true)    {
        y += 1;
        if(distinctYearDigits(y))
        {
            break;
        }
    }

    cout << y << endl;
}

bool distinctYearDigits(int year) {
    bool isDistinct = true;
    vector<int> seenDigits;

    for(int i = 0; i < 4; ++i) {

        if(findInList((year%10), seenDigits)) {
           isDistinct = false;
           return isDistinct ;
        } else {
            seenDigits.push_back(year % 10);

        }

        year = year / 10;
    }

    return isDistinct;
    
}

bool findInList(int target, vector<int> intVector) {
    bool found = false;

    for(int i : intVector) {
        if(i == target) {
            found = true;
            return found;
        }
    }
    return found;
}