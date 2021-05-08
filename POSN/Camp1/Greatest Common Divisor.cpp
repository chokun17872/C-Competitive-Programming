/*
    TASK: GCD
    LANG: C
    AUTHOR: Chavalvit Keartnattakorn
    SCHOOL: CRU
*/
#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
	if(a%b==0) return b;
	else return gcd(b,a%b);
}
int main(){
	int n,ans,num;
	scanf("%d %d",&n,&ans);
	for(int i=0 ; i<n-1 ; i++){
		scanf("%d",&num);
		ans = gcd(ans,num);
	}
	printf("%d",ans);
}
/*int gcd(int a,int b){
	if(a % b == 0) return b;
	return gcd(b,a%b);
}

int main(){
	int n,ans,num;
	scanf("%d %d",&n,&ans);
	for(int i=0 ; i<n-1;  i++){
		scanf("%d",&num);
		ans = gcd(ans,num);
	}
	printf("%d\n",ans);
	return 0;*/
//}
