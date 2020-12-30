#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    int l1=a.length();
    int l2=b.length();
    if(a==b)
    {
        cout<<-1;
    }
    else{
        cout<<max(l1,l2);
    }
}
