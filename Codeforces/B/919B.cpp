#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
    int sum=0;
    while(n){
        sum+=n%10;
        n/=10;

    }
    return sum;
}
int main()
{
    int t;
    cin>>t;
    int s=0;
    while(t)
    {
        s++;
        if(sum(s)==10)t--;
    }
    cout<<s<<'\n';
}
