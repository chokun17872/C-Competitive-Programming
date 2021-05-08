/*
    TASK: Quadrant
    LANG: CPP
    AUTHOR: Chavalvit Keartnattakorn	
    SCHOOL: CRU
*/
#include <stdio.h>

int main()
{
	int teta;
	scanf("%d",&teta);
	
	if(teta < 0){
		teta = -teta;
		teta = 360-teta;
	}
	
	if(teta >=  0){
		while(teta >= 360){
			teta -= 360;
		}
	}
		
	if(teta == 0 || teta == 180 || teta == 360){
		printf("x-axis");
	}
	else if(teta == 90 || teta == 270){
		printf("y-axis");
	}
	else if(teta > 0 && teta < 90){
		printf("1");
	}else if(teta > 90 && teta < 180){
		printf("2");
	}
	else if(teta > 180 && teta < 270){
		printf("3");
	}
	else if(teta > 270 && teta < 360){
		printf("4");
	}
	return 0;
}
