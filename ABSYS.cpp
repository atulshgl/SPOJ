#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char ans[10],num1[10],num2[10],ad[10],eq[10],num3[10];
        cin>>num1>>ad>>num2>>eq>>num3;
        if(num1.find("macula")!=string::npos)
        {
            num1=to_string(atoi(num3)-atoi(num2));
        }
        else if(num2.find("macula")!=string::npos)
        {
            num2=to_string(atoi(num3)-atoi(num1));
        }
        else if(num3.find("macula")!=string::npos)
        {
            num3=to_string(atoi(num1)+atoi(num2));
        }
        ans=num1+ad+num2+eq+num3;
        cout<<ans;
    }
    return 0;
}
