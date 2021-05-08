/*
    TASK: Yin-Yang
    LANG: CPP
    AUTHOR: Chavalvit Keartnattakorn	
    SCHOOL: CRU
*/
#include <stdio.h>

int main()
{
	int n,N;
	scanf("%d",&N);	
	int i=0;
	
	while(i<N){
		
		scanf("%d",&n);
		
	for(int i=0 ; i<n+2 ; i++){
		for(int j=i ; j<n+1 ; j++){
			printf(".");
		}		
		for(int j=0 ; j<i+1 ; j++){
			printf("#");
		}

		if(i == 0 || i == n+1){
			for(int j=0 ; j<n+2 ; j++){
				printf("+");
			}
		}
		else{
			printf("+");
			for(int j=0 ; j<n ; j++){
			printf("#");				
			}
			printf("+");
		}									
		printf("\n");
	}
	
	for(int i=0 ; i<n+2 ; i++){
		
		if(i == 0 || i == n+1){
			for(int j=0 ; j<n+2 ; j++){
				printf("#");
			}
		}
		else{
			printf("#");
			for(int j=0 ; j<n ; j++){
			printf("+");				
			}
			printf("#");
		}
				
		for(int j=i ; j<n+2 ; j++){
			printf("+");
		}		
		for(int j=0 ; j<i ; j++){
			printf(".");
		}											
		printf("\n");
	}
	i++;			
}	
	return 0;
}
