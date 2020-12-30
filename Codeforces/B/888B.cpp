#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a=0,b=0,p=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='L')
        {
            a=a-1;
        }
        else if(s[i]=='D')
        {
            b-=1;
        }
        else if(s[i]=='R')
        {
            a+=1;
        }
        else if(s[i]=='U')
        {
            b+=1;
        }
        if(a==0 && b==0)
        {
            p=i;
        }

    }
//cout<<a<<" "<<b<<'\n';
   /* if(p==0)
    {
        cout<<0;
    }
    else{
        cout<<(p+1);
    }*/
    cout<<n-abs(a)-abs(b);

}
