#include<iostream>
using namespace std;
int f91(long long n)
{


        if(n>=101)
        {
            return n-10;
        }
        else if(n<=100)
        {

        return f91(f91(n+11));

    }
}
int main()
{
    long long i,a;
    for(i=0;i<=250000;i++)
    {
        cin>>a;
        if(a==0)
        {
            break;
        }

            cout<<"f91("<<a<<") = "<<f91(a)<<'\n';


    }
    return 0;
}
