//d085: 1.�p��h�Ӿ�ƪ������ȡB�̤j�ȡB�̤p��

#include<iostream>
#include<stdio.h>
using namespace std;

main(){
	int n;
	cin >> n;
	float te,ans=0,min=100000,max = -1;
	for(int i=0;i<n;i++){
		cin >> te;
		ans += te;
		if(te>max)max=te;
		if(te<min)min=te;
	}
	int a = (ans/n)*1000;
	a = a%10;
	ans /= n;
	if(a>=5)ans += 0.01;
	printf("%.2f",ans);
	cout << '\n' << max << '\n' << min;
	 
} 
