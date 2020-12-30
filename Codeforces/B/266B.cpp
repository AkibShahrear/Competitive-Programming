#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n,t,k;
    cin>>n>>t;
    cin>>s;
    k=s.length();
    for(int j=0;j<t;j++)
    {
        for(int i=0;i<n-1;i++)
        {
            if(s[i]=='B' && s[i+1]=='G')
            {
                s[i]='G';
                s[i+1]='B';
                i++;
            }
        }
    }
    cout<<s;
    return 0;
}
