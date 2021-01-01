#include<iostream>
using namespace std;
int fib(int n)
{
    int result;
    if(n==1 || n==2)
    {
        result =1;
    }
    else{
        result=fib(n-1)+fib(n-2);
        return result;
    }
}
int main()
{
    int a;
    while(cin>>a){
    cout<<"The Fibonacci number for "<<a<<" is "<<fib(a-1)<<'\n';

    }
    return 0;
}
