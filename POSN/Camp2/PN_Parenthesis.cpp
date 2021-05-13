/*
TASK: PN_Parenthesis
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
stack <int> st;
int s[100100];
int main(){

	int n,i,j,cnt=0,mx=0,cc=0,mm=0;
	char p;
	scanf("%d",&n);
	for(i=0 ; i<n ; i++){
		scanf(" %c",&p);
		if(p=='(') st.push(-1);
		else if (p==')'){
			cnt++;
			if(!st.empty() && st.top()==-1) st.push(0);
			cc = st.top(); st.pop();
			while(!st.empty() && st.top()!=-1){
				cc = max(cc,st.top()); st.pop();
			}
			if(!st.empty() && st.top()==-1){
				st.pop(); st.push(++cc);
			}
			s[cc]++; mx = max(mx,cc);
		}
	}
	printf("%d\n%d\n",cnt,mx);
	for(i=1 ; i<=mx ; i++)
		printf("%d ",s[i]);
	return 0;
}

