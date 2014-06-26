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
long long int num,deno;
long long int gcd(long long int u,long long int v)
{
    if(v==0)
        return u;
    return gcd(v,u%v);
}
void solve(long long int x)
{
    if(x==1)
    {
        num=1,deno=1;
        return;
    }
    solve(x/2);
    if(x&1)
        num+=deno;
    else
        deno+=num;
    return;
}
int main()
{
    long long int n,g;
    sl(n);
	while(n)
    {
        solve(n);
        g=gcd(num,deno);
        printf("%lld/%lld\n",num/g,deno/g);
        sl(n);
    }
	return 0;
}
