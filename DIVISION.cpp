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
long long int po(long long int a,long long int b)
{
    long long int res=1;
    while(b)
    {
        if(b&1)
            res=(res*a)%M;
        b/=2;
        a=(a*a)%M;
    }
    return res;
}
int main()
{
 	long long n,ans,d3=po(3,M-2);
	while(sl(n)!=EOF)
	{
	    if(n&1)
            ans=((po(2LL,n)+1LL)*d3)%M;
        else
            ans=(((M + po(2LL,n)-1LL)*d3)+1LL)%M;
		pl(ans);
	}
	return 0;
}
