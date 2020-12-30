#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    long long x,mn;
    int mx=-1;
      for(int i=0;i<n;i++)
    {
          mn=1000000010;

        for(int j=0;j<m;j++)
        {


            cin>>x;
        //    cout<<"x: "<<x<<'\n';
          mn=min(x,mn);


        }
        if(mn>mx)
        {
            mx=mn;
        }

       // cout<<"mx: "<<mx<<'\n';
    }

    /*for(int i=0;i<n;i++)
    {
        long long mn=0;//100000001
        for(int j=0;i<m;j++)
        {
           // cin>>a[j];
            if(a[j]<mn)
            {
                mn=a[j];
            }

        }
        if(mn>mx)
        {
            mx=mn;
        }
        cout<<"mx: "<<mx<<'\n';

    }*/
    cout<<mx;
}
