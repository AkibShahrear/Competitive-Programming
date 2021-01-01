#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
#define pi acos(-1)
int main()
{
    int l,w,h,t;
    while(scanf("%d %d %d %d",&l,&w,&h,&t)!=EOF)
    {
        double x,p,q,r,d;
        x=l*w*h;
q=(t*pi)/180;
        p=tan(q);
        d=l*p;
        r=(0.5)*l*(l*p)*w;
        if(d>h)
        {
          printf("%0.3lf mL\n",0.5*h*h*l*w/d);
        }
        else{
        printf("%0.3lf mL\n",x-r);
        }
    }
}
