#include <iostream>

using namespace std;

main(){
	int n;
	cin >> n;
	while(n%2 != 1)
		n /= 2;
	cout << n;

}
