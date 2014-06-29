#include<iostream>
#include<stdio.h>
#include<cmath>
#include<cstring>
#include<stdlib.h>
#include<algorithm>
#include<limits.h>
using namespace std;

/*printing definitions*/
#define pi(x) printf("%d\n",(x))
#define pii(x,y) printf("%d %d\n",(x),(y))
#define pl(x) printf("%lld\n",(x))
#define pll(x,y) printf("%lld %lld\n",(x),(y))
#define pil(x,y) printf("%d %lld\n",(x),(y))
#define pli(x,y) printf("%lld %d\n",(x),(y))
#define plf(x) printf("%lf\n",(x))
#define plflf(x,y) printf("%lf %lf\n",(x),(y))

/*scanning definitions*/
#define si(x) scanf("%d",&x)
#define sii(x,y) scanf("%d %d",&x,&y)
#define sl(x) scanf("%lld",&x)
#define sll(x,y) scanf("%lld %lld",&x,&y)
#define sil(x,y) scanf("%d %lld",&x,&y)
#define sli(x,y) scanf("%lld %d",&x,&y)
#define slf(x) scanf("%lf",&x)
#define slflf(x,y) scanf("%lf %lf",&x,&y)

//  CREATED BY: ATUL SEHGAL
bool dp[100005];
int a[6],c[6];
int main()
{
 	int i,j,sum,k;
    sii(sum,k);
    for(i=1;i<=k;i++)
        si(a[i]),c[i]=c[i-1]+a[i];
    dp[sum]=1;
    for(i=sum;i>=0;i--)
        for(j=1;j<=k;j++)
            if(i-c[j]>=0 && !dp[i-c[j]])
                dp[i-c[j]]=dp[i];
    if(dp[0])
        printf("YES");
    else
        printf("NO");
	return 0;
}
