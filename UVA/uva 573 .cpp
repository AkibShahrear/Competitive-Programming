#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
double h,u,d,f,i;
while(scanf("%lf %lf %lf %lf",&h,&u,&d,&f)==4 && h!=0.0)
{
    int day =0;
 double p=u*(f/100);
 double k=0.0;
    while(1)
    {
        day++;
     if(u>0)   k=k+u;
     u=u-p;
     if(k>h)
        break;
    k=k-d;
    if(k<0)
        break;

    }
if(k>=0)
    printf("success on day %d\n",day);
else
    printf("failure on day %d\n",day);

}
return 0;
}

