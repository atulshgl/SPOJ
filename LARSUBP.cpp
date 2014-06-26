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
#define M 1000000007
//  CREATED BY: ATUL SEHGAL
char s[10004];
long long int dp[11];
int main()
{
 	long long int T=1,t,i,j,l,ans,k;
	cin>>t;
	while(t--)
	{
	    memset(dp,0,sizeof(dp));
		scanf("%s",s);
		l=strlen(s);
		for(i=0;i<l;i++)
        {
            k=s[i]-'0';
            dp[k]=(dp[k]+1)%M;
            for(j=0;j<k;j++)
                dp[k]=(dp[k]+dp[j])%M;
        }
        ans=0;
        for(i=0;i<10;i++)
            ans=(ans+dp[i])%M;
		printf("Case %lld: ",T++);
		pl(ans);
	}
	return 0;
}
