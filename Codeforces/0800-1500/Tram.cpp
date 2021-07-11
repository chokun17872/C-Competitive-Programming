/*
TASK: Tram
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
	int stop,mx=-1,people=0,in,out;
	scanf("%d",&stop);
	for(int i=0 ; i<stop ; i++){
		scanf("%d %d",&out,&in);
		people=people-out+in;
		mx=max(mx,people);
	}
	printf("%d\n",mx);
	
	return 0;
}

