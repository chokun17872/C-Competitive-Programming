/*
    TASK: Break
    LANG: CPP
    AUTHOR: Chavalvit Keartnattakorn
    SCHOOL: CRU
*/
#include <bits/stdc++.h>
using namespace std;
struct A{
	int s,f;
};
stack< A > st;
int main(){
	
	int n,i,s,f;
	scanf("%d",&n);
	while(n--){
		scanf("%d %d",&s,&f);
		while(!st.empty() && s > st.top().s){
			printf("%d\n",st.top().f);
			st.pop();
		}
		st.push({s,f});
	}
	return 0;
}
