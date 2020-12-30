#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n;
    cin>>n;
    cin>>s;
    set<char>p;
    int mx=-1;
    for(int i=0;i<n;i++)
    {
        int k=s[i];
        if(k>=97 && k<=122)
        {
            for(int j=i;j<n;j++)
            {
                if(s[j]>='A' && s[j]<='Z')
                {

                    i=j;
             //        cout<<"i: "<<i<<'\n';
                    break;

                }
              p.insert(s[j]);

            }
           // cout<<"size: "<<p.size()<<'\n';

                    }
          int u=p.size();
         mx=max(mx,u);
            p.clear();
    }
    cout<<mx;

}
