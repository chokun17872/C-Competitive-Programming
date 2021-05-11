/*
TASK: Make Product Equal One
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int a[100010];
int main(){
	
	int n,cnt=0,pos=0,neg=0,negtmp;
	scanf("%d",&n);
	for(int i=0 ; i<n ; i++){
		scanf("%d",&a[i]);
		if(a[i]<0) neg++;		
	}
	negtmp=neg;	
	for(int i=0 ; i<n ; i++){
		if(a[i]==0) cnt++;
		else if(a[i]>1) cnt+=a[i]-1;
		else if(a[i]<1&&neg%2==0){
			cnt+=a[i]*-1-1;			
		}
		else if(a[i]<1&&neg%2==1){
			if(negtmp>1) cnt+=a[i]*-1-1;
			else cnt+=1-a[i];
			negtmp--;
		}
	}
	
	printf("%d\n",cnt);	
	return 0;
}

