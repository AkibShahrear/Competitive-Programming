#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    if(n==1)
    {
        cout<<0<<'\n';
        return 0;
    }
    for(int i=2;i<=n;i++)
    {
        if(isprime(i))
        {
            v.push_back(i);
        }
    }
    /*for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" "<<'\n';
    }*/
   int o=v.size();
       for(int i=0;i<o;i++)
    {
        int s=v[i],l=v[i];
          //cout<<"s: "<<s<<" l: "<<l<<'\n';
        while(s)
        {
            s*=l;

            if(s<=n)
            {

                v.push_back(s);
            }
            else{
                break;
            }
        }


    }
     cout<<v.size()<<'\n';
     for(int i=0;i<v.size();i++)
     {
         cout<<v[i]<<" ";
     }


}
