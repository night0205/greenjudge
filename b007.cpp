#include <iostream>
#include <string>
using namespace std;

main(){
	string s;
	cin >> s;
	for(int i = s.length()-1; i >= 0 ;i--)
		cout << s[i];
}
