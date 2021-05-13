/*
TASK: Inversion Count
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
#define N 100100
int a[N],b[N];
long long ans;
void mergesort(int l,int r){
	if(l==r) return ;
	int mid = (l+r)/2;
	mergesort(l,mid);
	mergesort(mid+1,r);
	int i=l,j=mid+1,k=l;
	while(i<=mid && j<=r){
		if(a[i]<=a[j])
			b[k++]=a[i++];
		else
			b[k++]=a[j++],ans+=mid-i+1;	
	}
	while(i<=mid)
		b[k++]=a[i++];
	while(j<=r)
		b[k++]=a[j++];
	for(i=l ; i<=r ; i++)
		a[i]=b[i];
	return ;	
}
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
	int n,i;
	cin >> n;
	for(i=0 ; i<n ; i++)
		cin >> a[i];
	mergesort(0,n-1);
	cout << ans << endl;	
	return 0;
}

