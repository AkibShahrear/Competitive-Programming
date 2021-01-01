#include<stdio.h>
int sumy(int n)
{
    int sum=0;
    while(n>=1)
    {
        sum=sum + n%10;
        n=n/10;
    }
    return sum;
}



int main()
{
    int a,b,i,n,sum=0,cnt=0,t;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&a);
        for(i=a-60,cnt=0;i<=n;i++)
        {
            sum=i+sumy(i);
            if(sum==n)
            {
                printf("%d\n",i);
                break;
            }
            else
                cnt++;
        }
        if(cnt==61)
        {
            printf("0\n");
        }
    }
    return 0;
}
