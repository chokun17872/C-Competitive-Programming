/*
    TASK: Frequency sort
    LANG: CPP
    AUTHOR: Chavalvit Keartnattakorn
    SCHOOL: CRU
*/
#include <bits/stdc++.h>
using namespace std;
struct A{
	int num,cnt;
	bool operator < (const A& o)const{
		if(cnt>o.cnt) return cnt;
	}
};
A x[10010];
int a[10010];
int main(){
	
	int n,c;
	scanf("%d %d",&n,&c);
	for(int i=0 ; i<n ; i++){
		scanf("%d",&a[i]);
	/*	x[a[i]].cnt++;
		x[a[i]].num=a[i];*/
	}
	sort(x,x+n,greater<int>());
/*	for(int i=0 ; i<n ; i++)
		for(int j=0 ; j<n ; j++)
			printf("%d ",i);*/		
	
	return 0;	
}
