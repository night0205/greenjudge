#include <iostream>

using namespace std;

main(){
	int n, m;
	cin >> n >> m;
	int a = 0;
	while(n < m){
		n *= 3;
		a++;
	}
	cout << a;
}
