#include <iostream>

using namespace std;

main(){
    int n;
    cin >> n;
	int s[5] = {90,80,70,60,0};
	string d[5] = {"A", "B", "C", "D", "E"};
	for(int i = 0; i < 5; i++){
		if(n >= s[i]){
			cout << d[i];
			break;
		}
	}
}

