/*
TASK: Schedule TOI8
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int minu[1010][1010],day[1010][1010],a[1010],b[1010];
int main(){

	int m,n,daya,dayb,mina,minb;
	scanf("%d %d",&m,&n);
	for(int i=1 ; i<=n ; i++)
		scanf("%d",&a[i]);
	for(int i=1 ; i<=n ;  i++)
		scanf("%d",&b[i]);
	for(int i=1 ; i<=n ; i++){
		day[0][i]=day[0][i-1]; minu[0][i]=minu[0][i-1];
		if(minu[0][i]+b[i]>m)  minu[0][i]=b[i],day[0][i]++;
		else 				   minu[0][i]+=b[i];	
	}
	for(int i=1 ; i<=n ; i++){
		day[i][0]=day[i-1][0]; minu[i][0]=minu[i-1][0];
		if(minu[i][0]+a[i]>m)  minu[i][0]=a[i],day[i][0]++;
		else 				   minu[i][0]+=a[i];
	}
	for(int i=1 ; i<=n ;  i++){
		for(int j=1 ; j<=n ; j++){
			daya=day[i-1][j],mina=minu[i-1][j]+a[i];
			if(mina>m) mina=a[i],daya++;
			
			dayb=day[i][j-1],minb=minu[i][j-1]+b[j];
			if(minb>m) minb=b[j],dayb++;
			
			if(daya<dayb || daya==dayb && mina<minb){
				minu[i][j]=mina; day[i][j]=daya;
			}
			else minu[i][j]=minb, day[i][j]=dayb;
		}
	}
	printf("%d\n%d\n",day[n][n]+1,minu[n][n]);		
	return 0;
}

