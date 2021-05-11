/*
TASK: FC_Domino
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int a[100002],b[100005];
int main(){

	int n,i,ma,now,coun,st,ansst;
	char ans;
	scanf("%d",&n);
	for(i=0 ; i<n ; i++)
		scanf("%d %d",&a[i],&b[i]);
	ma=0,now=0,coun=0;
	for(i=0 ; i<n ; i++){
		if(now<=a[i]){
			if(ma<coun)
				ma=coun,ansst=st,ans='R';
			st=i,coun=1,now=a[i]+b[i];	
		}
		else
			now=max(now,a[i]+b[i]),coun++;
	}
	if(ma<coun)
		ma=coun,ansst=st,ans='R';
		now=INT_MAX,coun=0;
		for(i=n-1 ; i>=0;  i--){
			if(now>=a[i]){
				if(ma<coun)
					ansst=st,ma=coun,ans='L';
				else if((ma==coun)&&(ansst>=st))
					ansst=st,ma=coun,ans='L';
				st=i,coun=1,now=a[i]-b[i];	
			}
			else
				now=min(now,a[i]-b[i]),coun++;			
		}
		if(ma<coun)
			ansst=st,ma=coun,ans='L';
		else if((ma==coun)&&(ansst>=st))
			ansst=st,ma=coun,ans='L';
		printf("%d %c",ansst+1,ans);		
	return 0;
}

