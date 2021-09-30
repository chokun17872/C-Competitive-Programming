/*
TASK: Cheap Travel
AUTHOR: passa-
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
double n,m,a,b,cost;
int main(){

    scanf("%lf %lf %lf %lf",&n,&m,&a,&b);

    if(a < b/m){                // single ticker is worth than special ticket       
        cost = n*a;             
        printf("%.0lf",cost);
        return 0;
    };
    
    while(n-m >= 0){
        cost += b;
        n -= m;
    }

    cost += (n*a < b) ? (n*a) : b ;
    printf("%.0lf",cost);
    return 0;
};