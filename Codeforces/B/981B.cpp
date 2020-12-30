#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
map<int,int>m;
int main()
{
    for(int i=0;i<2;i++)
    {
        int n;
        cin>>n;
        while(n--)
        {
            int x,y;
            cin>>x>>y;
            m[x]=max(m[x],y);
        }

    }
    ll sum=0;
    for(auto &i: m)
    {
        sum +=i.second;
    }
    cout<<sum;

	return 0;

}
