#include<bits/stdc++.h>
using namespace std;
int arr[30]={0};


int main()
{
    vector<int>v;
    int n,m,k;
    cin>>n>>m>>k;
    int a[m+2];
    for(int i=0;i<=m;i++)
    {
        cin>>a[i];
    }
    int f=0;
    for(int i=0;i<m;i++)
    {
        int cnt=0;
        for(int j=0;j<n;j++)
        {

           int p=(a[i]>>j & 1);
           int l=(a[m]>>j & 1);
           if(p!=l)
           {
               cnt++;
           }

        }

        f+=cnt<=k;
    }
cout<<f;

}
