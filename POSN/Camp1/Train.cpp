/*
    TASK: Train
    LANG: C
    AUTHOR: Chavalvit Keartnattakorn
    SCHOOL: CRU
*/
#include <bits/stdc++.h>
using namespace std;
list <int> l;
list <int>::iterator it;
string a;
int main(){
	
	int n;
	cin >> n;
	l.push_back(999);
	int num;
	it = l.begin();
	while(n--){
		cin >> a;
		if(a=="call"){
			printf("%d\n",*it);
		else if(a=="head")
			it = l.begin();
		else if(a=="tail")
			it = l.end();
			it--;
		else if(a=="next")
			it++;
			if(it == l.end())
				it--;
		else if(a=="list"){
			for(list<int>::iterator)
		}
			
		}

	}
	
}
