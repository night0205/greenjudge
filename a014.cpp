#include <iostream>

using namespace std;

main(){
	int n, max = 10000000;
	for(int i = 0; i < 3; i++){
		cin >> n;
		if(n < max) max = n;
	}
	cout << max;
}

