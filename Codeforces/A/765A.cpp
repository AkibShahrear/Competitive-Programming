#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s,p;
    cin>>s;
    int sum=0;
    while(t--)
    {
        cin>>p;
        if(p.substr(0,3)==s)
        {

            sum++;
        }
        else{
            sum--;
        }
    }
    if(sum>0)
    {
        cout<<"contest\n";
    }
    else{
        cout<<"home\n";
    }
}
