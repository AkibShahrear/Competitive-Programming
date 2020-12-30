#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int even=0,odd=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {
            even++;
        }
        else{
            odd++;
        }
    }
    if(n%2!=0 && a[0]%2!=0 && a[n-1]%2!=0)
    {
        cout<<"Yes";
        return 0;
    }
    else
    {
        cout<<"No";
        return 0;
    }


}
