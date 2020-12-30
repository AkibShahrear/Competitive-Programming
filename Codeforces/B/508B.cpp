#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    string s;
    cin>>s;
    int l=s.length();
    int cnt=0;
    for(int i=0;i<l;i++)
    {
        int p=(int)(s[i]-'0');
        //int s[i]=p;
       // cout<<p<<'\n';
        if(p%2==0)
        {
            cnt++;
            v.push_back(i);
        }
    }
    if(cnt==0)
    {
        cout<<-1;
        return 0;
    }
    if(cnt==1)
    {

    //cout<<"s[l-1]: "<<s[l-1]<<" v[0]:"<<v[0]<<'\n';
        swap(s[l-1],s[v[0]]);
    }
    else{
           int k= (int)(s[l-1]-'0');
          bool is=false;
        for(int i=0;i<v.size();i++)
        {

         int y= (int) (s[v[i]]-'0');
         if(k>y)
         {
             is=true;
             swap(s[l-1],s[v[i]]);
             break;
         }

        }

         if(!is)
        {
          swap(s[l-1],s[v[(v.size()-1)]]);
        }

    }
      cout<<s;
}
