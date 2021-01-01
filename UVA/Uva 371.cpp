#include<iostream>
#include<cstdio>
using namespace std;
int acr(int n);
int main()
    {
        int a,b,d,i;
        while(cin>>a>>b){
        if(a==0 && b==0)
        {
            break;
        }
        else
        {
            int max=0,g=0;
            for(i=a;i<=b;i++){
                    int sum=0;
    while(i>1)
    {
        if(i%2==0)
        {
            i=i/2;
        }
        else if(i%2!=0) {
            i=3*i+1;
        }
        sum=sum+1;
    }
        if(max<sum)
        {
            max=sum;
            g=i;
        }
            }
           printf("Between %d and %d, %d generates the longest sequence of %d values.\n",a,b,g,max);
        }
    }

    }






