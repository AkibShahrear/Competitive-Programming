#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

     if(n%2==0)
    {
        long long cnt=1;
        for(int i=0;i<n/2;i++)
        {
            cnt*=2;
        }
        cout<<cnt;
    }
    else{
        cout<<0;
    }
}
