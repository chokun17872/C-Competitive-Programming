/*
TASK: Deva scales
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
long long a[25],b[25];
int main(){

	long long n,t=0,sum,i;
	a[0]=1;
	for(i=1 ; i<=20; i++)
		a[i]=a[i-1]*3;
	b[0]=1;
	for(i=1 ; i<=20 ; i++)
		b[i]=a[i]+b[i-1];
	scanf("%lld",&n);
	sum=n;
	while(1){
		for(i=0 ; i<20 ; i++)
			if(b[i]+n<a[i+1])
				break;
		n=abs(n-a[i]),t++;
		sum+=a[i];
		if(n==0) break;	
	}
	printf("%lld %lld\n",t,sum/2);		
	return 0;
}
