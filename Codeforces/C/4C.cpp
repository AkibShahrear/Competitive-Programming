#include<bits/stdc++.h>
#include<map>
using namespace std;
int main()
{
    map<string,int>m;
    string s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if(m.count(s)==0)
        {
            cout<<"OK"<<'\n';
            m[s]=1;
        }
        else
        {
            cout<<s<<m[s]<<'\n';
            m[s]+=1;
        }
    }
    return 0;
}
