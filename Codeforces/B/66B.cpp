#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
    }
    int best=0;

    for(int i=0;i<t;i++)
    {
         int cnt=1,temp=0;
        for(int j=i-1;j>=0 && a[j]<=a[j+1] ;j--) cnt++;
        for(int j=i+1;j<t && a[j]<=a[j-1];j++)cnt++;
        best=max(cnt,best);
    }
    cout<<best<<'\n';
}
