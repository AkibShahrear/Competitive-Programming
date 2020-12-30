#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char s[n+1];
    for(int i=0;i<n;i++)
    {
        int p=i%4;
        if(i%4==0 )
        {
            s[i]='a';
        }
        else
        {
            s[i]='a'+p;
        }


    }
    for(int i=0;i<n;i++)
    {
        cout<<s[i];
    }
}
