#include<iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    int n,a,b,c,d,no=0;
    double p,g,k,x,l;
  while((cin>>n)!=0)
  {
double sum=0;
    for(int i=1;i<=n;i++)
    {
        if(n==0)
        {
            break;
        }
        else{
        char t[20],m[20];

        cin>>t>>a>>b;
        gets(m);
        cin>>m>>c>>d;
         p=a-c;
        k=p*p;
         g=b-d;
         l=g*g;
         x=sqrt(k+l);


sum=sum+x;

        }
    }

printf("Case %d: %0.2lf\n",++no,sum);
  }
    }


