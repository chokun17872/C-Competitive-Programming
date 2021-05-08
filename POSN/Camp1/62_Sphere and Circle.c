/*
    TASK: 62_Sphere and Circle 
    LANG: CPP
    AUTHOR: Chavalvit Keartnattakorn	
    SCHOOL: CRU
*/
#include <stdio.h>
#include <math.h>
int main()
{
	double r;
	scanf("%lf",&r);
	
	double area_sphere = 4*M_PI*r*r;
	double volume_sphere = 4*M_PI*r*r*r/3;
	double area_circle = M_PI*r*r;
	double circum_circle = 2*M_PI*r;
	
	printf("%.3lf\n",area_sphere);
	printf("%.3lf\n",volume_sphere);
	printf("%.3lf\n",area_circle);
	printf("%.3lf\n",circum_circle);
	return 0;
}
