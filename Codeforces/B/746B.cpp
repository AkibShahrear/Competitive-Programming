#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<char>v;
    int n;
    cin>>n;
    string s;
    cin>>s;
    int len=s.length();
    if(n%2!=0){
    for(int i=len-1;i>=0;i--)
    {
        if(i%2!=0){
        v.push_back(s[i]);
        }
    }
    for(int i=0;i<len;i++)
    {
        if(i%2==0){
        v.push_back(s[i]);
        }
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
    }
    }
    else{
        for(int i=0;i<len;i++)
    {
        if(i%2==0){
        v.push_back(s[i]);
        }
    }
    reverse(v.begin(),v.end());
        for(int i=0;i<len;i++)
    {
        if(i%2!=0){
        v.push_back(s[i]);
        }
    }


    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
    }



    }
}
