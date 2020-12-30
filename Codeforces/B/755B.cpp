#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    string s[10000],p[10000];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>p[i];
    }
        int l=n,h=m,k=0;
    for(int i=0;i<m;i++)
    {
     for(int j=0;j<n;j++)
     {
         if(p[i]==s[j])
          {
              k++;
          }

    }
}
l-=k;
h-=k;
if(k&1)
{
    l++;
}
if(l>h)
{
    cout<<"YES";
}
else{
    cout<<"NO";
}
}
