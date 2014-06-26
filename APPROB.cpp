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

/*looping definitions */
#define for(x,y,z) for(x=y;x<z;x++)
#define forr(x,y,z) for(x=y;x<z;x--)

/*fast i/p definitions*/
#define getcx getchar_unlocked
#ifndef ONLINE_JUDGE
    #define getcx getchar
#endif       
//  CREATED BY: ATUL SEHGAL
long long int gcd(long long int u, long long int v)
{
    if(v==0)
        return u;
    return gcd(v,u%v);
}
int main()
{
	long long int t,i,j,n,ans,six=6,d,n2;
	sl(t);
	while(t--)
	{
		sl(n);
		n2=n*n;
		if(n&1)
            ans = (3*n2+1)/2;// + (((n+1)/2)*((4+n)/2)) - ((n+1)/2);
        else
            ans= 3*n2/2;// + ((n*(2+n))/4);
        d=six*n*n2;
        j=gcd(ans,d);
        ans/=j;
        d/=j;
		printf("%lld/%lld\n",ans,d);
	}
	return 0;
}
