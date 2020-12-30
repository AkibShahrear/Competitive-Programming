#include<bits/stdc++.h>
using namespace std;
string arr[]={"saturday", "sunday","monday", "tuesday", "wednesday", "thursday", "friday"};
int main()
{
    string a,b;
    cin>>a;
    cin>>b;
    if(a==b)
    {
        cout<<"YES\n";
        return 0;
    }
    int c,d;
    for(int i=0;i<8;i++)
    {
        if(arr[i]==a)
        {
            c=i;
        }
        if(arr[i]==b)
        {
            d=i;
        }
    }
   // cout<<c<<" "<<d<<'\n';
    if(b==arr[(c+2)%7] || b==arr[(c+3)%7])
    {
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}
