/*
TASK: Team
Author: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int a[1010][1010];
int main(){
	
	int n,cnt=0,sum=0;
	scanf("%d",&n);
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<3 ; j++){
			scanf("%d",&a[i][j]);
			sum+=a[i][j];
		}
		if(sum>=2) cnt++;
		sum=0;
	}
	
	printf("%d\n",cnt);
	return 0;
}
