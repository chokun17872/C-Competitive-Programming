/*
    TASK: Easiest
    LANG: CPP
    AUTHOR: passa-
    SCHOOL: CRU
*/
#include<bits/stdc++.h>
using namespace std;
priority_queue<int> h;
int main(){
	int p,num;
	char a;
	scanf("%d",&p);
	while(p--){
		scanf(" %c",&a);
		if(a=='A'){
			scanf("%d",&num);
			h.push(-num);
		}
		else{
			if(h.empty())
				printf("-1\n");
			else{
				printf("%d\n",h.top()*-1);
				h.pop();
			}
		}
	}
	return 0;
}
