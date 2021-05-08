/*
    TASK: Ice Bucket Challenge
    LANG: CPP
    AUTHOR: Chavalvit Keartnattakorn	
    SCHOOL: CRU
*/
#include <stdio.h>

int main(){


	int g,k,q;
	int money = 100;
	int ans = 0;
	scanf("%d",&q);
	
	while(q--){
		scanf("%d %d",&g,&k);
		while(money < g){
				money -= 90;
				ans++;
				money += k*100;
			}			
		printf("%d",ans);
		money = 100;
		ans = 0;				
		}
				
	return 0;
		
}
		
	

