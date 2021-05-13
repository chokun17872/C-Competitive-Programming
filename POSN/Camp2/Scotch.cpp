/*
TASK: Scotch
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
long long n,a,b,i,sum=0,aa,bb,cnta[2],cntb[2],cntab[2][2];
int main(){

	cin >> n >> a >> b ;
	aa=2*a;
	bb=2*b;
	for(i=0 ; i<n ; i++){
		if((i%aa)<a){
			if(i%bb<b){
				cnta[0]++;
				cntb[0]++;
				cntab[0][0]++;
			}else{
				cnta[0]++;
				cntb[1]++;
				cntab[0][1]++;
			}
		}else{
			if(i%bb<b){
				cnta[1]++;
				cntb[0]++;
				cntab[1][0]++;
			}else{
				cnta[1]++;
				cntb[1]++;
				cntab[1][1]++;
			}
		}
	}
	sum=cnta[0]*cnta[0]+cnta[1]*cnta[1]+cntb[0]*cntb[0]+cntb[1]*cntb[1]
		-cntab[0][0]*cntab[0][0]
		-cntab[0][1]*cntab[0][1]
		-cntab[1][0]*cntab[1][0]
		-cntab[1][1]*cntab[1][1];
	cout << sum << endl ;
	return 0;
}

