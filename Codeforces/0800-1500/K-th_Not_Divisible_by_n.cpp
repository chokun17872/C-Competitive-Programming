/*
TASK: K-th Not Divisible by n
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int n,k,t;
int main(){
	
	cin >> t;
	
	while(t--){
		cin >> n >> k;				// bad code hard to read lol
		int chunk = k/(n-1);		// find chunk where number to set in + position --> pos of num in chunk
		int pos = k%(n-1);			// chunk: k/n-1*n pos:k%n-1
		if(!pos){
			chunk--; pos = n-1;	
		}
		int num_before = chunk * n;
		cout << num_before + pos << endl;
	}
	
    return 0;
    
}

/*

#Case:1
6
3 7
4 12
2 1000000000
7 97
1000000000 1000000000
2 1

10
15
1999999999
113
1000000001
1

*/
