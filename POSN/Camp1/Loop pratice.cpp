/*
    TASK: Loop pratice
    LANG: CPP
    AUTHOR: Chavalvit Keartnattakorn	
    SCHOOL: CRU
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	
	// 1
	int i=0;
	for(int i=0 ; i<n ; i++){
		printf("%d ",i+1);
	}	
	printf("\n");
	
	// 2
	while(n-i > 0){
		printf("%d ",n-i);
		i++;
	}
	printf("\n");
	
	// 3
	i=1;
	do{
		if(i % 2 == 0)
		printf("%d ",i);
		i++;
	}while(i <= n);
	printf("\n");
	
	// 4
	for(int i=0 ; i<n ; i++){
		if((n-i) % 2 == 0){
			printf("%d ",n-i);
		}
		if(n-i == 2){
			break;
		}
	}
	printf("\n");
	
	// 5
	i=1;
	while((2*i)-1 <= n){
		printf("%d ",(2*i)-1);
		i++;
	}
	printf("\n");
	
	// 6
	i=0;
	do{
		if((n-i) % 2 != 0){
			printf("%d ",n-i);
		}
		i++;
	}while(n-i>= 1);
	printf("\n");
	
	return 0;
}
