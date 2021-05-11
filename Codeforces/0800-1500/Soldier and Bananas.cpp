/*
TASK: Soldier and Bananas
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int p,m,n,sum=0;
	cin >> p >> m >> n;
	for(int i=1 ; i<=n ; i++)
		sum+=p*i;
	if(m>=sum) printf("0\n");
	else printf("%d",sum-m);
		
	return 0;
}

