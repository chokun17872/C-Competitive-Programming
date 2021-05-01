/*
TASK: Domino piling
Author: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int n,m,area,ans;
	scanf("%d %d",&n,&m);
	area = n*m;
	ans = area/2; // if area is odd num since ans is int it will round num down
	printf("%d\n",ans);
}
