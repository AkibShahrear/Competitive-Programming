#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int cnt=0;
    for(int i=1;i<t;i++)
    {
        if((t-i)%i==0)
        {
            cnt++;
        }
    }
    cout<<cnt;


}
