#include<bits/stdc++.h>
using namespace std;
int w[1001];
int main()
{
    string s;
    cin>>s;
    int k;
    cin>>k;
    int b;
    int mx=0;
    int pos=0;
    for(int i=0;i<26;i++)
    {
        cin>>w[i];
        if(mx<w[i])
        {
            mx=w[i];
            pos=i;
        }

    }
    //cout<<(char)('a'+1)<<'\n';
    int sum=0;
    for(int i=0;i<s.length();i++)
    {
         sum+=(i+1)*w[s[i]-'a'];
    }
    //cout<<mx;
    int cnt=0;
    int j=s.length();
    for(int i=1;i<=k;i++)
    {
        cnt+=(j+i)*mx;
        //cout<<cnt<<'\n';
    }
    cout<<sum+cnt;
}
