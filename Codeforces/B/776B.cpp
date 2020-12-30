#include<bits/stdc++.h>
using namespace std;
int isprime(int n)
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
    vector<int>v,k;
    cin>>n;
    if(n==1)
    {
        cout<<1<<'\n';
        cout<<1;
        return 0;
    }
    for(int i=1;i<=n;i++)
    {
        if(isprime(i+1))
        {
            v.push_back(i+1);
        }
    }
  int  p=0;
    for(int i=1;i<=n;i++)
    {
        int cnt=1;
        for(int j=0;j<v.size();j++)
        {
            if(((i+1)%v[j]==0) && ((i+1)/v[j])!=1)
            {
                cnt+=1;
                break;

            }
        }
        //p=max(p,cnt);
      if(cnt>1){
            p=1;
      k.push_back(2);
      }
      else{
        k.push_back(1);
      }
    }
    if(p==1){
    cout<<2<<'\n';
    for(int i=0;i<k.size();i++)
    {
        cout<<k[i]<<" ";
    }
    }
    else{
         cout<<1<<'\n';
    for(int i=0;i<k.size();i++)
    {
        cout<<k[i]<<" ";
    }
    }

}
