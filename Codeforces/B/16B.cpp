#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m;
    cin>>n>>m;
    vector<long long>cnt(11);
    int k=n;
    long long a,b;
    for(long long i=0;i<m;++i)
    {
        cin>>a>>b;
        cnt[b] +=a;
    }

     long long sum=0;
    for(int i=10;i;--i)
    {

        if(cnt[i]<=n)
        {
            sum+=cnt[i]*i;
            n -= cnt[i];
        }
        else{
            sum += n*i;
            n=0;
            break;
        }



    }
    cout<<sum<<'\n';


}
