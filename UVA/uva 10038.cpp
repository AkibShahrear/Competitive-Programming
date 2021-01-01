#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long int a,b,n,t,p,k,m;
    while(cin>>a>>b)
    {
        int sum=0;
        int res=0;

        if(a==0 && b==0)
        {
            break;
        }
while(a||b)
{
res=((a%10)+(b%10)+res)/10;
a/=10;
b/=10;
sum+=res;
}
if(sum==0)
cout<<"No carry operation."<<'\n';
else if(sum==1){

    cout<<sum<<" carry operation.\n";
}
else{
     cout<<sum<<" carry operations.\n";
}
    }
    return 0;
}
