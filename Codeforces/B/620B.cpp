#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b;
    cin>>a>>b;
    long long sum=0;
    for(int i=a;i<=b;i++){
     int p=i;
    while(p)
    {
        if(p==0)
        {
            break;
        }
        int t=p%10;
        if(t==0)
        {
            sum+=6;
        }
        else if(t==1)
        {
            sum+=2;
        }
        else if(t==2)
        {
            sum+=5;
        }
        else if(t==3){
            sum+=5;
        }
         else if(t==4)
        {
            sum+=4;
        }
        else if(t==5){
            sum+=5;
        }
         else if(t==6)
        {
            sum+=6;
        }
        else if(t==7){
            sum+=3;
        }
         else if(t==8)
        {
            sum+=7;
        }
        else if(t==9){
            sum+=6;
        }
        p/=10;
    }

    }
  cout<<sum<<'\n';

}
