/*
    TASK: Sequnce sort
    LANG: CPP
    AUTHOR: Chavalvit Keartnattakorn
    SCHOOL: CRU
*/
#include <bits/stdc++.h>
using namespace std;
vector<int> a;
vector<vector<int> > b;
int main(){
	
	int n,k,i,j,num;
	scanf("%d %d",&n,&k);
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<k ; j++){
			scanf("%d",&num);
			a.push_back(num);
		}
		b.push_back(a);
		a.clear();
	}
	sort(b.begin(),b.end());
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<k ; j++){
			printf("%d ",b[i][j]);	
		}
		printf("\n");
	}	
	return 0;
}
