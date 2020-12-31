#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x[13001];
        x[0]=x[1]=0;
        int p;
        cin>>p;
        int a[p+1];
        int even=0,odd=0;
        for(int i=0;i<p;i++)
        {
            cin>>a[i];
            x[a[i]%2]++;

        }
        //cout<<"x[0]: "<<x[0]<<'\n'<<"x[1]: "<<x[1]<<'\n';
        //sort(a,a+p);
        int cnt=0;

        if(x[0]%2==0)
            cnt=1;


         //cout<<"cnt1: "<<cnt<<'\n';
        for(int i=0;i<p;i++)
        {
            for(int j=i+1;j<p;j++)
            {
                //cout<<"a[i]: "<<a[i]<<'\n';
               // cout<<"a[j]: "<<a[j]<<'\n';


                if(abs(a[i]-a[j])==1)
                    cnt=1;
            }
        }
        //cout<<"cnt2:  "<<cnt<<'\n';
        if(cnt)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
