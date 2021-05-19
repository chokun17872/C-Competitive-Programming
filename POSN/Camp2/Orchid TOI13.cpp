/*
TASK: Orchid TOI13
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
#define size 1000000
using namespace std;
int Orchid[size];
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
	int N,Lst=1,tmp,next,i;
	cin >> N >> Orchid[0];
	for(i=1 ; i<N ; i++){
		cin >> tmp;
		next = upper_bound(Orchid,Orchid+Lst,tmp)-Orchid;
		Orchid[next]=tmp;
		if(next==Lst)
			Lst++;
	}
	cout << N-Lst << endl;
	return 0;
}

