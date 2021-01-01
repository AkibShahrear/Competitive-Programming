#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double n,tmp;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        tmp=sqrt(n);
        int numpart=(int)tmp;
        int kr =(tmp-numpart)*100;

        if(kr==0)
        {
            cout<<"yes"<<'\n';
        }
        else{
        cout<<"no\n";
        }
    }
}
