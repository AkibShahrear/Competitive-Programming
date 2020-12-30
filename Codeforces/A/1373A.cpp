#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,c;
        cin>>a>>b>>c;
       long long ak=a;
        long long bk=c;
        bool is=0,mor=0;
        int cnt=1,mnt=1,l=0,m=0;
        long long p=b+1;
       if(a<c)
       {
           cout<<1<<" ";
       }
       else{
        cout<<-1<<" ";
       }
       if(a*b>c)
       {
           cout<<b<<" ";
       }
       else{
        cout<<-1<<" ";
       }
        cout<<'\n';



    }
}
