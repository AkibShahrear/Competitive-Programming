#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    int p=(int)s[0]-'0';
    int l=(int)s[1]-'0';
    int m=(int)s[3]-'0';
    int n=(int)s[4]-'0';
    int a=(int)t[0]-'0';
    int b=(int)t[1]-'0';
    int c=(int)t[3]-'0';
    int d=(int)t[4]-'0';
    int k=(p*10)+l;
    int j=(k*60)+((m*10)+n);
    int q=(a*10)+b;
    int r=(q*60)+((c*10)+d);
    int z=((j+r)/60)/2;
    int u=(j+r)-(z*2*60);
    if(z/10==0)
    {
        cout<<"0"<<z<<":";
    }
    else{
        cout<<z<<":";
    }
    if((u/2)/10==0)
    {
        cout<<"0"<<u/2;
    }
    else{
        cout<<u/2;
    }
}
