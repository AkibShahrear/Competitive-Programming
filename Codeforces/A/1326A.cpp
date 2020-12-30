#include<bits/stdc++.h>
using namespace std;
int arr[]={'1','2','3','4','5','6','7','8','9'};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,a;
        cin>>n;
        if(n==1)
        {
            cout<<"-1\n";
        }
        else{
                cout<<"2";
            for(int i=0;i<n-1;i++)
            {
                cout<<"7";
            }
            cout<<'\n';
        }
    }

}
