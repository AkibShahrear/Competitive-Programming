#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;
int main()
{
       int sum=0,i,s,c;
    string n;
    while(true)
    {
        cin>>n;

        int len=n.length();
        if(n.at(0)=='0' && len==1)break;
c=0;
for(i=0;i<len;i++)
{
    s=c*10+n.at(i)-48;
    c=s%11;

}
         if(c==0)
        {
            cout<<n<<" is a multiple of 11.\n";
        }
        else
        {
            cout<<n<<" is not a multiple of 11.\n";
        }
    }
}
