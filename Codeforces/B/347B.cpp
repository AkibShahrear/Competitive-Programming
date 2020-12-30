#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==i)
        {
            cnt++;
            a[i]=20;
        }
    }

    int p=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=20){
       if(i==a[a[i]])
       {
           p=2;
           break;
       }
       else{
        p=1;
       }
        }




    }

 if((n-cnt)>1)
    {
         cout<<cnt+p;
    }
    else{
        cout<<cnt;
    }

}
