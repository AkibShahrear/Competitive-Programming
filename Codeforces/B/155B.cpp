#include<bits/stdc++.h>
using namespace std;
int c[1010],d[1010];
vector<int>v;
int main()
{
    int n;
    cin>>n;
    int p=1,cnt=0;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        if(b==0)
        {
            v.push_back(a);
        }
        else{
            p += b-1;
            cnt+=a;
        }
    }
    sort(v.rbegin(),v.rend());
    for(int i=0;i<v.size() & i<p;++i)
    {
        cnt+=v[i];
    }
   cout<<cnt;
}
