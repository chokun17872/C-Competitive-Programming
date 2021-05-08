/*
    TASK: Star Edge
    LANG: CPP
    AUTHOR: Chavalvit Keartnattakorn	
    SCHOOL: CRU
*/
#include <stdio.h>

int main()
{
	int q,n;
	scanf("%d",&q);
	
	while(q--){
		scanf("%d",&n);
			// P
	for(int i=0 ; i<n ; i++){
		if(i == 0 || i == (n-1)/2){
			for(int j=0 ; j<n ; j++){
				printf("*");
			}
				printf("-");			
		}
			
		else if(i > 0 && i < (n-1)/2){
			printf("*");
			for(int j=0 ; j<n-2 ; j++){
				printf("-");
			}
			printf("*");
		printf("-");	
		}
		
			
		else{
			printf("*");
			for(int j=0 ; j<n-1 ; j++){
				printf("-");
			}
		printf("-");	
		}
	
	// O
	if(i == 0 || i == n-1){
		for(int j=0 ; j<n ; j++){
			printf("*");
		}
		printf("-");			
	}
	else{
		printf("*");
		for(int j=0 ; j<n-2 ; j++){
			printf("-");
		}		
		printf("*");
		printf("-");
	}
	
	// S
	if(i == 0 || i == (n-1)/2 || i == n-1){
		for(int j=0 ; j<n ; j++){
			printf("*");
		}
		printf("-");
	}
	else if(i > 0 && i < (n-1)/2){
		printf("*");
		for(int j=0 ; j<n-1 ; j++){
			printf("-");
		}
		printf("-");
	}
	else if(i > (n-1)/2 && i < n-1){
		for(int j=0 ; j<n-1 ; j++){
			printf("-");
		}
		printf("*");
		printf("-");
	}
	
	// N
	printf("*");
	int k=1;
	for(int j=0 ; j<n-2 ; j++){
		if(k == i && k > 0 && k < n-1){
			printf("*");
		}
		else{
			printf("-");
		}
		k++;	
	}	
	printf("*");	
		
		printf("\n");
	}
	}

	return 0;
}
