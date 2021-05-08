/*
    TASK: Suitable
    LANG: CPP
    AUTHOR: Chavalvit Keartnattakorn
    SCHOOL: CRU
*/
#include <bits/stdc++.h>
using namespace std;
struct A{
	int d,c;
	bool operator< (const A& o) const{
		return c <o.c;
	}
};
A a[100100];
int main(){
	int n,i;
	double ans1,ans2,sum=0,el=0,mx=0;
	scanf("%d",&n);
	
	for(int i=0 ; i<n ; i++){
		scanf("%d %d",&a[i].d,&a[i].c);
	}
	sort(a,a+n);	
	sum=a[0].d, el=a[0].c, mx = sum/el;
	ans1=sum, ans2=el;
	for(i=1 ; i<n ; i++){
		sum+=a[i].d, el=a[i].c;
		if(sum/el > mx)
			mx=sum/el, ans1=sum, ans2=el;
	}
	
	printf("%.0lf %.0lf\n",ans1,ans2);
	
	return 0;
	
}
