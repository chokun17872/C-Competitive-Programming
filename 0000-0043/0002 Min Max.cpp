/*
TASK: Min Max
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int a[1010];
int mx=-2000,mn=2000;
int main(){
	
	int n;
	scanf("%d",&n);
	for(int i=0 ; i<n ; i++){		
		scanf("%d",&a[i]);	
		mx = max(mx,a[i]);
		mn = min(mn,a[i]);
	}
		
	printf("%d\n%d",mn,mx);	
	
	return 0;
}

