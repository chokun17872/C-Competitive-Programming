/*
TASK: Funny Tile
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
struct A{
	int type,i,j;
	bool operator < (const A& o)const{
		if(type!=o.type) return type<o.type;
		else if(j!=o.j)  return j<o.j;
		return i<o.i;
	}
};
vector<A> ans;
void play(int n,int imid,int jmid,int iho,int jho){
	int quad;
	if(iho<imid && jho>=jmid) quad=1;
	else if(iho<imid && jho<jmid) quad=0;
	else if(iho>=imid && jho<jmid) quad=2;
	else	quad=3;
	ans.push_back({quad,imid-1,jmid-1});
	if(n<=2) return ;
	// Up Right
	if(quad==1) play(n/2,imid-n/4,jmid+n/4,iho,jho);
	else		play(n/2,imid-n/4,jmid+n/4,imid-1,jmid);
	// Up Left
	if(quad==0) play(n/2,imid-n/4,jmid-n/4,iho,jho);
	else		play(n/2,imid-n/4,jmid-n/4,imid-1,jmid-1);
	// Down Left
	if(quad==2) play(n/2,imid+n/4,jmid-n/4,iho,jho);
	else		play(n/2,imid+n/4,jmid-n/4,imid,jmid-1);
	// Down Right
	if(quad==3) play(n/2,imid+n/4,jmid+n/4,iho,jho);
	else		play(n/2,imid+n/4,jmid+n/4,imid,jmid);
}
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
	int n,jho,iho,i;
	cin >> n >> jho >> iho;
	play(n,n/2,n/2,iho,jho);
	sort(ans.begin(),ans.end());
	cout << ans.size() << endl;
	for(i=0 ; i<ans.size() ; i++)
		cout << ans[i].type << ' ' << ans[i].j << ' ' << ans[i].i << endl; 
	return 0;
}

