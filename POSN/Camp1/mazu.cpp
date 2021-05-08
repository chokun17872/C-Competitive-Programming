/*
    TASK: mazu
    LANG: CPP
    AUTHOR: Chavalvit Keartnattakorn
    SCHOOL: CRU
*/
#include <bits/stdc++.h>
using namespace std;
stack<char> st;
int main(){
	
	int n;
	char a;
	scanf("%d",&n);
	while(n--){
		scanf(" %c",&a);
		if(!st.empty() && a==st.top())
			st.pop();
		else	
		st.push(a);	
	}
	printf("%d\n",st.size());
	if(st.size()==0) printf("empty\n");
	else{
		while(!st.empty()){
			printf("%c",st.top());
			st.pop();
		}
		printf("\n");
	}
	return 0;
}
