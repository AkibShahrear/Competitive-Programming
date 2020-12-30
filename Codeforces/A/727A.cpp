#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b;
    vector<int>v;
    cin>>a>>b;
    int cnt=1;
    v.push_back(b);
    while(b)
    {
        if(a==b)
        {
            break;
        }
        if(b%2==0)
        {
            cnt++;
            b/=2;
            v.push_back(b);

        }
        else if(b%2!=0)
        {
            cnt++;
            b-=1;
            if(b%10==0){
            b/=10;

            v.push_back(b);
            }
            else{
                cout<<"NO\n";
                return 0;
            }
        }

    }
    if(b!=a)
    {
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
        cout<<cnt<<'\n';
        for(int i=v.size()-1;i>=0;i--)
        {
            cout<<v[i]<<" ";
        }
        cout<<'\n';
    }
}
