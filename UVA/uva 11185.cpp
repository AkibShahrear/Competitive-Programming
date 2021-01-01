#include<iostream>
using namespace std;
int ternery(long long int p)
{
    int k;
        k=p%3;
        p=p/3;
        if(p!=0)
        {
        ternery(p);
    cout<<k;
        }
        else
            cout<<k;

}
int main()
{
    int a,n;
    while(cin>>n)
    {
        if(n<0)
        {
            break;
        }
        else
            ternery(n);
            cout<<'\n';

    }
return 0;

}
