/*
TASK: Maximum Sub Array
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int a[505][505],qs[505][505],ans,mall=-1e9;
int main(){

	int n,i,j,mx,k;
	scanf("%d",&n);
	for(i=1 ; i<=n ; i++){
		for(j=1 ; j<=n ; j++){
			scanf("%d",&a[i][j]);
			qs[i][j]=qs[i][j-1]+a[i][j],mall=max(a[i][j],mall);
		}
	}
	for(i=1 ; i<=n ; i++){
		for(j=i ; j<=n ; j++){
			for(k=1,mx=0 ; k<=n ; k++){
				if(mx+qs[k][j]-qs[k][i-1]>=0) mx+=(qs[k][j]-qs[k][i-1]);
				else mx=0;
				ans = max(mx,ans);		
			}
		}
	}
	if(mall<0) printf("%d\n",mall);
	else printf("%d\n",ans);	
	return 0;
}

