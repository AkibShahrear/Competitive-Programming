#include<iostream>
using namespace std;
int swap(int a,int b){
int temp=a;
a=b;
b=temp;

}
int main()
{
    int a,n,arr[1000];
    while(cin>>a)
    {
        int temp=0;
        for(int i=0;i<a;i++)
         {
             cin>>arr[i];
         for(int j=0;j<n-1-i;j++)
            {
                if(arr[j]>arr[j+1])
                  temp++;

            }

         }
         cout<<temp;
    }
}
