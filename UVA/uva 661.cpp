#include<iostream>
using namespace std;


int main()
{
     int n,m,capacity,seq=1;
     while (cin>>n>>m>>capacity)
     {
          if (n==0 && m==0 && capacity==0) return 0;
          int swis[21]={0};
          int c[21];
          for (int i=1;i<=n;i++) cin>>c[i];
          int max=0,sum=0;
          for (int i=0;i<m;i++)
          {
               int t;
               cin>>t;
               if (swis[t]==0)
               {
                sum+=c[t];
                swis[t]=1;
               }
               else
               {
                    sum-=c[t];
                    swis[t]=0;
                }
               if (sum>max) max=sum;
          }
          cout<<"Sequence "<<seq++<<endl;

          if (max>capacity)
            cout<<"Fuse was blown."<<endl;
          else
           cout<<"Fuse was not blown."<<endl<<"Maximal power consumption was "<<max<<" amperes."<<endl;
          cout<<endl;
     }
 return 0;
}
