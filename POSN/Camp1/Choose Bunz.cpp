/*
    TASK: Choose Bunz
    LANG: C
    AUTHOR: Chavalvit Keartnattakorn
    SCHOOL: CRU
*/
#include <bits/stdc++.h>
using namespace std;
int a[2][10005];
int main(){
	
	int n,r,k;
	scanf("%d %d %d",&n,&r,&k);
	if(n==1){
		printf("%d\n",1%k); return 0;
	}
	a[1][0] = a[1][1] = 1;
	for(int i=2 ; i<=n ; i++){
		a[i%2][0] = a[i%2][i] = 1;
		for(int j=1 ; j<i ; j++){
			a[i%2][j] = a[(i-1)%2][j-1] + a[(i-1)%2][j];
			a[i%2][j] %= k;
		}
	}
	printf("%d\n",a[n%2][r]%k);
	return 0;
}
