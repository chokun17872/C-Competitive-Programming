/*
TASK: Kefa and First Steps
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int a[101000];
int main(){
	
	int n,cnt=0,last,mx=-1;
	scanf("%d",&n);
	for(int i=0 ; i<n ; i++)
		scanf("%d",&a[i]);
	last = a[0];
	for(int i=0 ; i<n ; i++){
		if(a[i]>=last) cnt++;
		else cnt=1;
		mx = max(mx,cnt);
		last = a[i];
	}
	printf("%d\n",mx);
	return 0;
}

