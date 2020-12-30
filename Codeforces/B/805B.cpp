#include<bits/stdc++.h>
using namespace std;

char a[200010];

int main()
{
    int n;
    cin>>n;

    if(n==1)
    {
        cout<<'a';
    }
    else{
        a[0]='a';
        a[1]='b';
        for(int i=2;i<n;i++)
                a[i]=(a[i-2]=='a'?'b':'a');
        printf("%s\n",a);
    }
}
