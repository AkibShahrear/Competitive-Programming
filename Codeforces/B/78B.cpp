#include<bits/stdc++.h>
using namespace std;
char s1[]="GBIV";
int main()
{

    int n;
    cin>>n;
    cout<<"ROY";
    n-=3;
    for(int i=0;i<n;i++)
    {

        cout<<s1[i%4];
    }

}
