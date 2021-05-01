/*
TASK: worldcup
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
struct A{
	char name[30];
	int score,diff,goal;
	bool operator < (const A& o)const{
		if(score!=o.score)	return score>o.score;
		else if(diff!=o.diff) return diff>o.diff;
		else if(goal!=o.goal) return goal>o.goal;					
	}
};
A team[10];
int a[10][10];

int main(){
	
	for(int i=1 ; i<=4 ; i++){
		scanf("%s",team[i].name);
	}
	for(int i=1 ; i<=4 ; i++)
		for(int j=1 ; j<=4 ; j++)
			scanf("%d",&a[i][j]);
			
	for(int i=1 ; i<=4 ; i++){
		for(int j=1 ; j<=4 ; j++){
			if(i!=j){
				if(a[i][j]>a[j][i]) team[i].score += 3;
				if(a[i][j]==a[j][i]) team[i].score += 1;
				team[i].diff += a[i][j]-a[j][i];
				team[i].goal += a[i][j];
			}
		}
	}
	
	sort(team+1,team+5);		
	
	for(int i=1 ; i<=4 ; i++){
		printf("%s %d\n",team[i].name,team[i].score);
	}		
			
	return 0;
}

