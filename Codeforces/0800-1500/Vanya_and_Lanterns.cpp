/*
TASK: Vanya and Lanterns
AUTHOR: passa-
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int n,l,d;
double mx=0,a[1010],dis[1010];

int main(){

    scanf("%d %d",&n,&l);
    
    for(int i=0 ; i<n ; i++){
        scanf("%lf",&a[i]);
    }

    sort(a,a+n);

    for(int i=0 ; i<=n ; i++){
        if(i == 0) dis[i] = a[0];
        else if(i == n) dis[n] = l - a[n-1];
        else{
            dis[i] = (a[i] - a[i-1])/2;
        }
    }

    for(int i=0 ; i<=n ; i++){
        mx = max(dis[i],mx);
    }

    printf("%lf\n",mx);
    return 0;
};