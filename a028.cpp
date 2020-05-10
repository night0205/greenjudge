#include <iostream>

using namespace std;

main(){
	int p = 1, n, r;
	cin >> n >> r;
	for(int i = n-r+1; i <= n; i++)
		p *= i;
	cout << p;
}

