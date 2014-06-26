#include<iostream>
using namespace std;
int a[100005],b[100005];
int main()
{
    int suma,sumb,i,j,k,l,na,nb,ans;
    while(1)
    {
        suma=sumb=0;
        ans=0;
        cin>>na;
        if(!na)
            break;
        for(i=0;i<na;i++)
            cin>>a[i];
        cin>>nb;
        for(i=0;i<nb;i++)
            cin>>b[i];
        //cout<<"na="<<na<<" nb="<<nb<<endl;
        i=j=0;
        while(1)
        {
            if(i==na)
            {  
                 while(j!=nb)
                {
                    sumb+=b[j];
                    j++;
                }
            }
            if(j==nb)
            {
                while(i!=na)
                {
                    suma+=a[i];
                    i++;
                }
            }
            if(i>=na && j>=nb)
            {
                ans+=(suma>sumb?suma:sumb);
                break;
            }
            if(a[i]==b[j])
                ans+=(a[i]+(suma>sumb?suma:sumb)),suma=sumb=0,i++,j++;
            else if(a[i]<b[j])
            {
                suma+=a[i];
                i++;
            }
            else
                sumb+=b[j],j++;
    //        cout<<"i="<<i<<" j="<<j<<endl;
        }
        cout<<ans<<endl;
    }
    return 0;
}
