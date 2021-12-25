#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int min = 0;
	int max = 0;
	for(int i = 0; i < n; ++i) {
		int a, b;
		cin >> a >> b;
		
		//calculate number of passangers;
		min = min - a;
		min = min + b;	

		if(min > max)
			max = min;
			
	}

	cout << max << endl;
}
