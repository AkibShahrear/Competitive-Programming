#include<bits/stdc++.h>
using namespace std;
int a[40],b[40];
int main()
{
    vector<int>v;
    int d,smtm;
    cin>>d>>smtm;
    int sum=0;
    int limmx=0;
    int k=0;
    for(int i=0;i<d;i++)
    {
        cin>>a[i]>>b[i];
         k+=a[i];
        limmx+=b[i];


    }
   // cout<<"K: "<<k<<'\n';
   /* for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<'\n';
    }*/
    if(k>smtm || limmx<smtm){
    cout<<"NO\n";
    return 0;
   }
   else
   {
       cout<<"YES\n";
    for(int i=0;i<d;i++)
    {
        //cout<<"K: "<<k<<'\n';
        // cout<<"a[i]: "<<a[i]<<'\n';
        cout<<min(b[i],smtm-k+a[i])<<" ";
        smtm-=min(b[i],smtm-k+a[i]);
       // cout<<"smtm: "<<smtm<<'\n';

        k-=a[i];

    }
   }


}
