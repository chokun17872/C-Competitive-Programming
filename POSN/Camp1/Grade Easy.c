/*
    TASK: Grade Easy
    LANG: CPP
    AUTHOR: Chavalvit Keartnattakorn	
    SCHOOL: CRU
*/
#include <stdio.h>

int main()
{
	int s;
	scanf("%d",&s);
	
	if(s >= 80)
		printf("A");
	else if(s >= 75)
		printf("B+");
	else if(s >= 70)
		printf("B");
	else if(s >= 65)
		printf("C+");
	else if(s >= 60)
		printf("C");
	else if(s >= 55)
		printf("D+");
	else if(s >= 50)
		printf("D");
	else
		printf("F");
		
	return 0;
}
