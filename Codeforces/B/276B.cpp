#include<bits/stdc++.h>
using namespace std;
int n=10100;
int main()
{
    string s;
    cin>>s;
    int a[n];
    int l=s.length();
   // cout<<"l: "<<l<<'\n';
    for(int i=0;i<l;i++)
    {
        a[s[i]]+=1;
    }
    int cnt=0;
    for(int i=0;i<l;i++)
    {
        if(a[s[i]]%2==1)
        {
            cnt++;
        }
    }
    if(cnt==0)
    {
        cout<<"First";
        return 0;
    }
     if(cnt==1)
    {
        cout<<"First";
        return 0;
    }
    if(cnt %2==0)
    {
        cout<<"Second";
        return 0;
    }
    cout<<"First";
    return 0;



}
