#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        cout<<" ";
        for(int j=0;j<i+2;j++)
        {
            cout<<"x ";
        }
        cout<<'\n';
    }
}
