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

/*fast i/p definitions*/
#define getcx getchar_unlocked
#ifndef ONLINE_JUDGE
    #define getcx getchar
#endif       
//  CREATED BY: ATUL SEHGAL
inline int in()
{
   int n=0;
   int ch=getcx();int sign=1;
   while( ch < '0' || ch > '9' ){if(ch=='-')sign=-1; ch=getcx();}

   while(  ch >= '0' && ch <= '9' )
           n = (n<<3)+(n<<1) + ch-'0', ch=getcx();
   return n*sign;
}
int a[1000006][3],dp[1000006][3];
int main()
{
    int n,i,j,t=0;
    n=in();
    while(n)
    {
        t++;
        for(i=0;i<n;i++)
            for(j=0;j<3;j++)
                a[i][j]=in();
        dp[n-1][2]=99999999;
        dp[n-1][1]=a[n-1][1];
        dp[n-1][0]=a[n-1][0]+dp[n-1][1];
        for(i=n-2;i>=0;i--)
        {
            dp[i][2]=a[i][2]+min(dp[i+1][1],dp[i+1][2]);
            dp[i][1]=a[i][1]+min(dp[i+1][0],min(dp[i+1][1],min(dp[i+1][2],dp[i][2])));
            dp[i][0]=a[i][0]+min(dp[i+1][0],min(dp[i+1][1],dp[i][1]));
        }
        printf("%d. %d\n",t,dp[0][1]);
        n=in();
    }
	return 0;
}
