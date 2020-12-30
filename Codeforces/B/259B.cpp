#include<bits/stdc++.h>
using namespace std;
int a[4][4];
int main()
{

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    int b=a[0][1]+a[0][2];
    int c=a[1][0]+a[1][2];
    int d=a[2][0]+a[2][1];
    a[2][2]=(b+c-d)/2;
    //cout<<b<<" "<<c<<" "<<d;
    int k=a[2][0]+a[2][1]+a[2][2];
    a[0][0]=k-b;
    a[1][1]=k-c;

     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<'\n';
    }
}
