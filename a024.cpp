#include <iostream>

using namespace std;

main(){
	int n;
	cin >> n;
	int s = 0;
	while(n > 0){
		s += n%10;
		n /= 10;
	}
	cout << s;
}

