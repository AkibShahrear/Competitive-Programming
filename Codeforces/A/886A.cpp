#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10];
    long sum=0;
    for(int i=0;i<6;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    if(sum%2!=0)
    {
        cout<<"NO";
        return 0;
    }
    sort(a,a+6);
    /*int p=a[0]+a[1]+a[5];
    int q=a[1]+a[2]+a[3];
    int r=a[0]+a[2]+a[5];
    int s*/
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6 && j!=i;j++)
        {
            for(int k=0;k<6 && k!=i && k!=j;k++)
            {
                int o=a[i]+a[j]+a[k];
                if(o==sum-o)
                {
                    cout<<"YES";
                    return 0;
                }
            }
        }
    }

/*    if(p==sum-p || )
    {
        cout<<"YES";
        return 0;
    }*/
    cout<<"NO";
    return 0;
}
