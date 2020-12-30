#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int j=1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {
            cout<<a[i]/2<<'\n';
        }
        else{
            if(j%2==1)
            {
                cout<<(a[i]+1)/2<<'\n';
            }
            else{
                cout<<(a[i]-1)/2<<'\n';
            }
            j++;
        }
    }

}
