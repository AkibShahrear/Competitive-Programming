#include<bits/stdc++.h>>
using namespace std;

int main()
{

    int p,n,k,y;
    cin>>p;
    int a=0,b=0,x=0;

    for(int i=0;i<p;i++)
    {
        cin>>n;
        a^=n;
    }
    for(int i=0;i<p-1;i++)
    {
        cin>>k;
        b^=k;
    }
    for(int i=0;i<p-2;i++)
    {
        cin>>y;
        x^=y;
    }
  printf("%d\n%d\n",a^b,b^x);
}
