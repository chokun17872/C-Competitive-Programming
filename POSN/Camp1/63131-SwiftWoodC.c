/*
    TASK: Swift Wood Cut
    LANG: CPP
    AUTHOR: passa-
    SCHOOL: CRU
*/
#include <bits/stdc++.h>
using namespace std;
long long a[1000100];
int main(){
	
	long long n,m,l,r,mid,sum,i;
	scanf("%lld %lld",&n,&m);
	for(i=0 ; i<n ; i++)
		scanf("%lld",&a[i]);
	l=0;r=1e18;
	while(l<r){
		mid = (l+r+1)/2;
		for(i=0,sum=0 ; i<n ; i++)
			if(mid < a[i])
				sum += a[i] - mid;
		if(sum>=m) l=mid;
		else 	   r=mid-1;		
	}
	printf("%lld\n",l);
	return 0;	
}
