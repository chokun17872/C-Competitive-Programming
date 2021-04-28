/*
TASK: Machine
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int lst[1000];
int main(){
	
	int n,size=0,cost;
	char opr;
	scanf("%d",&n);

	for(int i=0 ; i<n ; i++){
		scanf(" %c",&opr);
		if(opr=='P'){
			scanf("%d",&cost);
			lst[size]=cost;
			size++; // increase size by 1
			sort(lst,lst+size); // sort from min to max
		}
		if(opr=='Q'){
			if(size==0){
				printf("-1\n"); continue;	
			} 
			printf("%d\n",lst[size-1]); // print max
			size--; // decrease size by 1
		}
	}
	return 0;
}

