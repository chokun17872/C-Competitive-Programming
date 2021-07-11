/*
TASK: Vanya and Fence
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
	int w,ppl,fen,h;
	scanf("%d %d",&ppl,&fen);
	w=ppl;
	for(int i=0 ; i<ppl ; i++){
		scanf("%d",&h);
		if(h>fen) w++;
	}
	printf("%d\n",w);
	
	return 0;
}

