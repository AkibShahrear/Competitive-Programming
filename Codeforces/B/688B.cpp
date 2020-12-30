#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
   long long len=s.length();

    for(int i=0;i<len;i++)
    {
        cout<<s[i];
    }
    for(int i=len-1;i>=0;i--)
    {
        cout<<s[i];
    }

}

