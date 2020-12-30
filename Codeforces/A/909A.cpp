#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    vector<string>v;

    //cin.ignore();
    string a="",b="";
    int p;
    for(int i=0;i<s.length();i++)
    {
        for(int j=0;j<t.size();j++)
        {
           // cout<<" s_substr: "<<s.substr(0,i+1)<<'\n';
            //cout<<" t_substr: "<<t.substr(0,j+1)<<'\n';

            v.push_back(s.substr(0,i+1)+ t.substr(0,j+1));
        }


    }

   sort(v.begin(),v.end());

    cout<<v[0];
}
