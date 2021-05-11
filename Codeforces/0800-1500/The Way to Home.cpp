/*
TASK: The Way to Home
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
char a[1010];
int b[1010],dp[1010];
int main(){
	
	int n,d,mark,dis;
	scanf("%d %d",&n,&d);	
	scanf(" %s",a);
	for(int i=1 ; i<=n ; i++)
		b[i]=a[i-1]-'0';	
	dp[1]=1;
	for(int i=1 ; i<=n ; i++){
		if(b[i]){
			dis=1;
			while(dis<=d&&i-dis>=0){
				if(b[i-dis]&&dp[i-dis]){
					dp[i]=dp[i-dis]+1;
				}
				dis++;
			}
		}
	}

	if(!dp[n]) printf("-1");
	else printf("%d\n",dp[n]-1);
				
	return 0;
}

