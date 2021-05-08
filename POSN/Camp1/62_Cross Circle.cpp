/*
    TASK: Cross Circle
    LANG: CPP
    AUTHOR: Chavalvit Keartnattakorn	
    SCHOOL: CRU
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
	
	double h1,k1,r1,h2,k2,r2,d,max,min;
	int q;
	
	scanf("%d",&q);
	
	while(q--){
		scanf("%lf %lf %lf %lf %lf %lf",&h1,&k1,&r1,&h2,&k2,&r2);
		d = sqrt(pow(h1-h2,2)+pow(k1-k2,2));
		
		if(r1>r2) max=r1,min=r2;
		else max=r2,min=r1;
		
		if(max > d){
			if(h1==h2 && k1==k2){
				if(r1==r2) printf("More\n");
				else printf("None\n");
			}
			else{
			if(d+min > max) printf("More\n");
			if(d+min == max) printf("One\n");
			if(d+min < max) printf("None\n");	
			}			
		}
		else{
		if(r1+r2 > d) printf("More\n");
		if(r1+r2 < d) printf("None\n");
		if(r1+r2 == d) printf("One\n");	
		}				 
	}
	
	return 0;
	
}
