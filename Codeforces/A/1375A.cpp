#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int p=(n-1)/2;
        for(int i=0;i<n;i++)
        {
            if(i%2!=0)
            {
                cout<<-abs(a[i])<<" ";
            }
            else{
                cout<<abs(a[i])<<" ";
            }
        }
        cout<<'\n';
    }


    return 0;
}
