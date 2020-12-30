#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;

    int i=1;
    if(n==1 || n==2)
    {
        cout<<1<<'\n';
       cout<<n<<'\n';
       return 0;
    }
    int sum=n;
    while(n)
    {

        n-=i;
        if(n<0)
        {
            break;
        }
     //   cout<<"i: "<<i<<'\n';
        v.push_back(i);
        i++;

    }
    cout<<v.size()<<'\n';

    for(int i=0;i<v.size()-1;i++)
    {
        cout<<v[i]<<" ";
        sum-=v[i];

    }
    cout<<sum<<'\n';
}
