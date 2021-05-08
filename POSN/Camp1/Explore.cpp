/*
    TASK:
    LANG: CPP
    AUTHOR: Pooripat Apirukchotima
    SCHOOL: CRU
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> g[500100];
int hin[1000100],dp[500100];
int main()
{
    int n,m,k,a,b,i;
    scanf("%d %d %d",&n,&m,&k);
    while(m--)
    {
        scanf("%d %d",&a,&b);
        g[a].push_back(b);
    }
    while(k--)
    {
        scanf("%d",&a);
        hin[a]=1;
    }
    dp[1]=1;
    for(i=1;i<=n;i++)
    {
        if(!dp[i]) continue;
        if(!hin[i]) dp[i+1]=1;
        for(auto x : g[i]) dp[x]=1;
    }
    printf("%d ",dp[n]);
    if(!dp[n])
    {
        for(i=n;i>=1;i--)
        {
            if(dp[i])
            {
                printf("%d\n",i);
                return 0;
            }
        }
    }
    return 0;

}
