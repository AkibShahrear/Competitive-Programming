#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;
int main()
{
    double r,n,t,b;
    while(scanf("%lf %lf",&r,&n)!=EOF)
    {


        t=sin(2*acos(-1)/n)/2;

        printf("%0.3lf\n",n*(r*r)*(t));

    }
}
