/*
    TASK: Richly sort
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: CRU
*/
#include<bits/stdc++.h>
using namespace std;
struct P{
	int x,y;
	bool operator<(const P& o)const{
		if(x==o.x) 	return y>o.y;
		return x<o.x;
	}
};
P a[100100];
int main(){
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d %d",&a[i].x,&a[i].y);
	sort(a,a+n);
	for(i=0;i<n;i++)
		printf("%d %d\n",a[i].x,a[i].y);
	return 0;	
}
