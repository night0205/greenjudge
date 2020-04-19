#include <iostream>
#include <string>

using namespace std;

main(){
	string n;
	cin >> n;
	for(int i = 0; i < n.length(); i++){
		char a = n[i]+24;
		if(a > 'Z') a -= 26;
		cout << a;
	}
}
