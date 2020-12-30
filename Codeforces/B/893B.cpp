#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    int p;
    while(n)
    {
        if(n%i==0){
        p=n/i;
       // cout<<"p: "<<p<<'\n';
        if(p==1)
        {
            break;
        }
       // cout<<"P: "<<p<<'\n';
        for(int j=1;j<=10;j++)
        {

            if(((pow(2,j)-1)*pow(2,j-1))==p)
            {
                 //cout<<"J: "<<j<<'\n';
                cout<<p;
                return 0;
            }
        }
        }


        i++;
    }
    cout<<1<<'\n';
    return 0;

}
