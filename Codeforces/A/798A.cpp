#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=s.length();
    int cnt=0;
    if(l%2==0){
    for(int i=0;i<l/2;i++)
    {
      //  cout<<"s[i]: "<<s[i]<<"\n";
       // cout<<"s[len-i]: "<<s[l-1-i]<<"\n";
        if(s[i]!=s[l-1-i])
        {
            cnt++;
        }

    }
      if(cnt==1)
    {
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    }
    else{
          for(int i=0;i<l/2;i++)
    {
      //cout<<"s[i]: "<<s[i]<<"\n";
       // cout<<"s[len-i]: "<<s[l-1-i]<<"\n";
        if(s[i]!=s[l-1-i])
        {
            cnt++;
        }

    }
      if(cnt==1 || cnt==0)
    {
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    }

}
