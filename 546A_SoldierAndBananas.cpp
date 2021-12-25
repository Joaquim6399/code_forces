#include <iostream>

using namespace std;

int main() {
	int k, n, w;
	cin >> k >> n >> w;

	int price = 0;

	for(int i = 0; i < w; ++i) {
		price += k * (i + 1);		
	}
	if(price > n)
		cout << price - n << endl;
	else
		cout << "0" << endl;

	
}
