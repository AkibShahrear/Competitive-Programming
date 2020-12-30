#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r,g,b,w;
        cin>>r>>g>>b>>w;
        int p=r%2+g%2+b%2+w%2;
        if(p<=1 || (p>=3 && r && g && b))
        {
            cout<<"Yes";
        }
        else {
            cout<<"No";

        }
        cout<<'\n';
    }
}
