#include<bits/stdc++.h>
using namespace std;
int a[101],b[101];
int main()
{
    int n;
    cin>>n;
    int one=0,two=0,three=0,four=0,five=0,x,y;
    for(int i=0;i<n;i++)
    {

        cin>>a[i];
        if(a[i]==1)
        {
            one++;
        }
        else if(a[i]==2)
        {
            two++;
        }
        else if(a[i]==3)
        {
            three++;
        }
        else if(a[i]==4)
        {
            four++;
        }
        else{
            five++;
        }

    }
      int onex=0,twox=0,threex=0,fourx=0,fivex=0;
    for(int i=0;i<n;i++)
    {

        cin>>b[i];
        if(b[i]==1)
        {
            onex++;
        }
        else if(b[i]==2)
        {
            twox++;
        }
        else if(b[i]==3)
        {
            threex++;
        }
        else if(b[i]==4)
        {
            fourx++;
        }
        else{
            fivex++;
        }

    }
    int cnt=0;
    if(one!=onex)
    {
        if((one+onex)%2!=0)
        {
            cout<<-1;
            return 0;
        }
        int p=(one+onex)/2;
        int k=min(one,onex);
        int l=p-k;
        cnt+=l;

    }
      if(two!=twox)
    {
        if((two+twox)%2!=0)
        {
            cout<<-1;
            return 0;
        }
        int p=(two+twox)/2;
        int k=min(two,twox);
        int l=p-k;
        cnt+=l;

    }
     if(three!=threex)
    {
        if((three+threex)%2!=0)
        {
            cout<<-1;
            return 0;
        }
        int p=(three+threex)/2;
        int k=min(three,threex);
        int l=p-k;
        cnt+=l;

    }
     if(four!=fourx)
    {
        if((four+fourx)%2!=0)
        {
            cout<<-1;
            return 0;
        }
        int p=(four+fourx)/2;
        int k=min(four,fourx);
        int l=p-k;
        cnt+=l;

    }
     if(five!=fivex)
    {
        if((five+fivex)%2!=0)
        {
            cout<<-1;
            return 0;
        }
        int p=(five+fivex)/2;
        int k=min(five,fivex);
        int l=p-k;
        cnt+=l;

    }
    int u=0;
  /*  for(int i=0;i<n;i++)
    {
        if(a[i]==b[i])
        {
            u++;
        }
    }
    if(u==n)
    {
        cout<<0;
        return 0;
    }
    if(cnt==0)
    {
        cout<<-1;
        return 0;
    }
*/

    cout<<cnt/2;
}
