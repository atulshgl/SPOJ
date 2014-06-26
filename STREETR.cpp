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

long long int gcd(long long int u,long long int v)
{
    if(v==0)
        return u;
    return gcd(v,u%v);
}
int a[1000006];
int main()
{
 	long long int i,n,ans,d;
    sl(n);
    sl(a[0]);
    sl(a[1]);
    d=a[1]-a[0];
    for(i,2,n)
    {
        sl(a[i]);
        d=gcd(d,a[i]-a[i-1]);
    }
   // cout<<d<<endl;
    ans=(a[n-1]-a[0])/d;
    ans++;
    ans=ans-n;
    pl(ans);
	return 0;
}
