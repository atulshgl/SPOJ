#include<iostream>
#include<stdio.h>
#include<cmath>
#include<cstring>
#include<stdlib.h>
#include<algorithm>
#include<limits.h>
#include<list>
#include<vector>
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
struct node
{
    bool marked;
    list<int> edge;
};
node tree[10004];
int max_len;

int longest_path(int k)
{
    int max1=0,max2=0,len;
    tree[k].marked=1;
    list<int>::iterator i;
    for(i=tree[k].edge.begin();i!=tree[k].edge.end();i++)
    {
        if(!tree[*i].marked)
        {
            len=1+longest_path(*i);
            if(max1>=len && len>max2)
                max2=len;
            if(max1<len)
            {
                max2=max1;
                max1=len;
            }
        }
    }
    max_len=max(max_len,max1+max2);
   // cout<<"max_len @ node="<<k<<" is "<<max_len<<endl;
    return max1;
}
int main()
{
	int t,i,n,u,v;
	n=in();
    max_len=0;
    for(i=0;i<n-1;i++)
    {
        sii(u,v);
        tree[u].edge.push_back(v);
    }
    longest_path(1);
    pi(max_len);
	return 0;
}
/*
test case:
16
1 2
1 3
1 4
2 5
2 6
6 7
6 8
7 9
7 10
8 11
11 13
13 15
15 16
10 12
12 14
*/
