/*
TASK: Perket
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int n,s[100],b[100],s_sum=1,b_sum=0,mark[100],delta,mn=1e9;
void play(int st){
	if(st==n) return;
	for(int i=0 ; i<n ; i++){
		if(!mark[i]){
			mark[i]=1;
			s_sum*=s[i];
			b_sum+=b[i];
			delta = abs(s_sum-b_sum);
			
			if(delta<mn){
				mn = delta;	
				
			}
			else s_sum/=s[i],b_sum-=b[i];
		//		printf("%d %d:%d %d:%d %d %d\n",i,s[i],s_sum,b[i],b_sum,delta,st);

			play(st+1);
			mark[i]=0;
			s_sum/=s[i],b_sum-=b[i];
		}
	}
}
int main(){
	
	scanf("%d",&n);
	
	for(int i=0 ; i<n ; i++)
		scanf("%d %d",&s[i],&b[i]);
	
	play(0);
	
	printf("\n%d",mn);
		
	return 0;
}

