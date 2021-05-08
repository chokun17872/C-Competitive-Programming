*
    TASK: Intro04
    LANG: CPP
    AUTHOR: Chavalvit Keartnattakorn	
    SCHOOL: CRU
*/
#include <stdio.h>

int main()
{
	double d,Vr,Vt,Vf,t;
	double fly_d;
	scanf("%lf %lf %lf %lf",&d,&Vr,&Vt,&Vf);
	
	t = d/(Vt-Vr);
	fly_d = Vf*t;

	printf("\n%.2lf",fly_d);
	return 0;
}
