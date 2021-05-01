/*
TASK: Hit the Lottery
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int money,cnt=0;
	scanf("%d",&money);
	while(money>0){
		if(money>=100) money-=100,cnt++;
		else if(money>=20) money-=20,cnt++;
		else if(money>=10) money-=10,cnt++;
		else if(money>=5) money-=5,cnt++;
		else if(money>=1) money-=1,cnt++;
	}
	
	printf("%d\n",cnt);
	return 0;
}

