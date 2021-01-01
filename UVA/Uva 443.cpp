#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
int reverse(int j);
using namespace std;
int main()
{
    char x[1000];
    int i,len,n;
    while(cin.getline(x,1000))
    {
        n=0;
        if((x[0]-48) >=0 && x[0]-48 <=9)
        {
            len = strlen(x);
            reverse(x,x+len);
            for(i=0;x[i];++i)
            {
                n=n*10+x[i]-48;
                if((n>= 65 && n<=90)||(n>=97 && n<=122)||n==32||n==33||n==44||n==46||n==58||n==59||n==63)
                {
                    printf("%c",n);
                    n=0;
                }
            }
        }
        else for(i=strlen(x)-1;i>=0;i--)
        {
            int j=x[i];
            reverse(j);
        }
        printf("\n");
    }
    return 0;
    }
    int reverse(int j)
    {
        int a;
        int sum=0;
        while(j>0)
        {
            a=j%10;
            printf("%d",a);
            j=j/10;
        }
        return sum;
    }

