#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        int l=0;
        while(b[l]!='1')l++;
        int m=l;

        while(a[m]!='1')m++;
        int p=m-l;
        cout<<p<<'\n';
    }
}
