#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
double a[101];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    sort(a,a+n);

    if(n==1)
    {
        cout<<setprecision(10)<<pi*(a[0]*a[0]);
    }
    else{

           // cout<<"sum: "<<sum<<'\n';

    if(n%2!=0){
             double sum=((a[n-1]*a[n-1])-(a[n-2]*a[n-2]))*pi+(a[0]*a[0])*pi;
     int i=1;
        while(n)
         {
              //cout<<"sum: "<<sum<<'\n';
            if(i+1<n-2){
                    //cout<<"a[i]: "<<a[i]<<'\n';
          sum+=((a[i+1]*a[i+1])-(a[i]*a[i]))*pi;
          i++;
            }

            else{
                    //cout<<"i: "<<i<<'\n';
                break;
            }
            i++;
        }
        printf("%.10lf\n",sum);
    }
    else
    {
        double sum=((a[n-1]*a[n-1])-(a[n-2]*a[n-2]))*pi;
         int i=0;
                while(n)
        {
              //cout<<"sum: "<<sum<<'\n';
            if(i+1<n-2){
                    //cout<<"a[i]: "<<a[i]<<'\n';
          sum+=((a[i+1]*a[i+1])-(a[i]*a[i]))*pi;
          i++;
            }

            else{
                    //cout<<"i: "<<i<<'\n';
                break;
            }
            i++;
        }
        printf("%.10lf\n",sum);
    }
    }
    }

