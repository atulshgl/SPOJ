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
#define M 10000007
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
 	long long int k,n,ans;
	sll(n,k);
	while(n>0 && k>0)
	{
	    ans=( (po(n,k)+ (2*po(n-1,k)))%M + (po(n,n)+(2*po(n-1,n-1)))%M )%M;
	    pl(ans);
		sll(n,k);
	}
	return 0;
}
