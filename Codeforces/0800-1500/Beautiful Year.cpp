/*
TASK: Beautiful Year
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,a,b,c,d;
	scanf("%d",&n);
	n++;
	a = n/1000;
	b = (n-a*1000)/100;
	c = (n-a*1000-b*100)/10;
	d = (n-a*1000-b*100-c*10);
	while(a==b||a==c||a==d||b==c||b==d||c==d){
		n++;
		a = n/1000;
		b = (n-a*1000)/100;
		c = (n-a*1000-b*100)/10;
		d = (n-a*1000-b*100-c*10);
	}
	printf("%d\n",n);	
	return 0;
	
}

