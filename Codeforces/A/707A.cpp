#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    char c;
    cin>>n>>m;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>c;
            if(c=='C'||c=='M'||c=='Y')
            {
                cnt++;
            }
        }
    }
    if(cnt>0)
    {
        cout<<"#Color\n";
    }
    else{
        cout<<"#Black&White\n";
    }
    return 0;
}
