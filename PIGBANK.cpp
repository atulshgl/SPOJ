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
long long int dp[10104],p[602],w[602];
int main()
{
 	long long int t,i,j,n,e,f,mx=1000000009,wt;
	sl(t);
	while(t--)
	{
	    sll(e,f);
		sl(n);
		for(i=0;i<n;i++)
            sll(p[i],w[i]);
        wt=f-e;
        dp[0]=0;
        for(j=1;j<=wt;j++)
                dp[j]=mx;
        for(i=1;i<=wt;i++)
            for(j=0;j<n;j++)
                if(w[j]<=i)
                    dp[i]=min(dp[i],dp[i-w[j]]+p[j]);
        if(dp[wt]!=mx)
            printf("The minimum amount of money in the piggy-bank is %lld.\n",dp[wt]);
        else
            printf("This is impossible.\n");
        
	}
	return 0;
}
