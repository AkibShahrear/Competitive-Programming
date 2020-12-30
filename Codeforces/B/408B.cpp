#include<bits/stdc++.h>
using namespace std;
const int n=10010;
int main()
{
    set<int>k;
    string s,p;
    cin>>s>>p;
    int l=s.length();
    int l1=p.length();

    sort(s.begin(),s.end());
    sort(p.begin(),p.end());
     int r[n],w[n];
    //cout<<s<<'\n'<<p<<'\n';
    for(int i=0;i<l;i++)
    {
        k.insert(s[i]);
           // cout<<"s[i]: "<<s[i]<<'\n';
          //cout<<"r[s[i]]: "<<r[s[i]]<<'\n';
        r[s[i]]++;

    }
     for(int i=0;i<l1;i++)
    {
        w[p[i]]++;
    }
 /*   for(int i=0;i<l;i++)
    {
        cout<<"r[s[i]]: "<<r[s[i]] <<" w[s[i]]: "<<w[s[i]]<<'\n';
    }*/
    long long sum=0;
    for(int i='a';i<='z';i++)
    {
       if(w[i]!=0 && r[i]==0){
           cout<<-1<<'\n';
           return 0;
       }
       sum+=min(w[i],r[i]);
    }
    cout<<sum<<'\n';
    return 0;
}
