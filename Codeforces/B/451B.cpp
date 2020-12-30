#include<bits/stdc++.h>
using namespace std;
int a[100100],b[100100];
int main()
{
    vector<int>v,k,p;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a,a+n);
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==b[i])
        {
            cnt++;
        }
        else if(a[i]!=b[i])
        {
            v.push_back(b[i]);
            k.push_back(a[i]);
            p.push_back(i);
        }
    }
    sort(v.rbegin(),v.rend());
    if(cnt==n)
    {
        cout<<"yes\n";
        cout<<"1 1";
        return 0;
    }

    int l=0;
    for(int i=0;i<v.size();i++)
    {
      if(v[i]==k[i])
      {
          l++;
      }
    }
    if(l==v.size()-1)
    {
        cout<<"yes\n";
        cout<<p[0]<<" "<<p[p.size()-1];
        return 0;
    }
    else{
        cout<<"no";
        return 0;
    }
}
