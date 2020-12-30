#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    cin>>n;
    int p=n/2;
    int s=p;
    int j,k;
    if(n==1 || n==3 || n==6 )
    {
        cout<<1<<" "<<n-1;
        return 0;
    }
    if(n%2!=0)
    {
        cout<<n/2<<" "<<n-(n/2);
        return 0;
    }
    if(n%2==0)
    {
        if(p%2!=0)
        {
            cout<<p-2<<" "<<p+2<<'\n';
        }
        else{
            cout<<p-1<<" "<<p+1<<'\n';
        }
    }
  /*  while(p--)
    {

        if(isPrime(p))
        {
            j=p;
            break;
        }

    }*/
 /*   while(s++)
    {
        if((s%2==0 && (n-s)%2!=0)||(s%2!=0 && (n-s)%2==0))
        {
           cout<<n-s<<" "<<s;
           return 0;
        }

    }*/

}
