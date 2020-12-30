#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a<=b)
        {
            cout<<b<<'\n';
        }
        else{
            long long p=c-d;
            long long l=a-b;
            if(c<=d)
            {
                cout<<-1<<'\n';
            }
            else{
                long long j=l/p;
                if(l%p==0)
                {
                    cout<<(c*j)+b<<'\n';
                }
                else{
                    cout<<((j+1)*c)+b<<'\n';
                }
            }
        }
    }
    return 0;
}
