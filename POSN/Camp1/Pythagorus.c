/*
    TASK: Pythagoras
    LANG: CPP
    AUTHOR: Chavalvit Keartnattakorn	
    SCHOOL: CRU
*/
#include <stdio.h>

int main()
{
	double a,b,c;
	scanf("%lf %lf %lf",&a,&b,&c);
	
	double x;
		
	if(a == 0){
		a = sqrt(pow(c,2) - pow(b,2));
		printf("%.2lf",a);
	}
			
	if(b == 0){
		b = sqrt(pow(c,2) - pow(a,2));
		printf("%.2lf",b);
	}
			
	if(c == 0){
		c = sqrt(pow(a,2) + pow(b,2));
		printf("%.2lf",c);
	}
		
	return 0;
}
