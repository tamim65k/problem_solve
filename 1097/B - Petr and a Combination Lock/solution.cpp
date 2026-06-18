/***from dust i have come, dust i will be***/
 
#include<bits/stdc++.h>
#define sf(n) scanf("%d", &n)
#define pfs(s) printf("%s",s)
using namespace std;
 
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "a", stderr);
#endif
    int i,j;
    int n,m,sum;
 
    sf(n);
 
    int a[n];
    for(i=0;i<n;i++)
        sf(a[i]);
 
    m=1<<n;
    for(i=0;i<m;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
        {
            if((1<<j)&i) sum+=a[j];
            else sum-=a[j];
        }
 
        if(sum%360==0)
        {
            pfs("YES
");
            return 0;
        }
    }
 
    pfs("NO
");
 
    return 0;
}