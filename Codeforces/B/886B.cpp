#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    vector<int>k(300000,n);

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        k[x]=i;
    }
    int mn=-1;
   //cout<<k[7]<<'\n';
    for(int i=0;i<300000;i++)
    {
       // cout<<"k[i]: "<<k[i]<<"\na[x]: "<<k[mn]<<'\n';
       if(mn==-1||k[i]<k[mn])
       {
           mn=i;
       }
    }
    cout<<mn;


}
