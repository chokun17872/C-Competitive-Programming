/*
TASK: Expression Tree
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
char node[300],str[300];
int l[300],r[300];
stack<int> st;
void in(int i){
	if(l[i]){
		printf("(");
		in(l[i]);
	}
	printf("%c",node[i]);
	if(r[i]){
		in(r[i]);
		printf(")");
	}
}
void pre(int i){
	if(node[i]==0) return ;
	printf("%c",node[i]);
	pre(l[i]);
	pre(r[i]);
}
int main(){

	int i,len,cou=0; // cou is index
	gets(str);
	len = strlen(str);
	for(i=0 ; i<len ; i++){
		if(isalpha(str[i])){
			node[++cou] = str[i];
			st.push(cou); // push index
		}
		else if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/'){ // use else if because there is spacebar from input
			node[++cou] = str[i];
			r[cou] = st.top(); st.pop();
			l[cou] = st.top(); st.pop();
			st.push(cou);
		}
	}
	in(cou); 	printf("\n");
	pre(cou);	printf("\n");
	return 0;
}

