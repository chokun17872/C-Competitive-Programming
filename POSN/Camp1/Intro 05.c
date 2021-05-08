/*
    TASK: Intro05
    LANG: CPP
    AUTHOR: Chavalvit Keartnattakorn	
    SCHOOL: CRU
*/
#include <stdio.h>
#include <math.h>
int main()
{
	double x1,y1,x2,y2,x3,y3,k,a,b,c,s,area,s_area;
	scanf("%lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&k);
	
	a = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
	b = sqrt(pow(x1-x3,2)+pow(y1-y3,2));
	c = sqrt(pow(x2-x3,2)+pow(y2-y3,2));
	
	s = (a+b+c)/2;
	
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	s_area = (k*a)+(k*b)+(k*c)+(M_PI*k*k);
	
	printf("%.2lf\n",area);
	printf("%.2lf",s_area);
	
	return 0;
}
