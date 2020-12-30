#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    int cn=0;

   // cout<<"cn: "<<cn<<'\n';
    if(b[n-1]-b[0]>k)
    {
        cout<<"NO\n";
        return 0;
    }
    else{
            cout<<"YES\n";
        for(int i=0;i<n;i++)
        {

                for(int j=0;j<b[0];j++)
                    cout<<1<<" ";
                for(int j=b[0];j<a[i];j++)
                        cout<<j-b[0]+1<<" ";
                cout<<'\n';

            }
        }

}

