/*
young explorers ei his inexperience
an explorerr with inexp e or more people


*/
#include<bits/stdc++.h>
using namespace std;
int e[2100200];
int main()
{
   long long t;
   cin>>t;
   while(t--)
   {
       long long  n,mx = 0 ;
       cin >> n;
       for(int i = 0; i < n; i++)
       {

           cin>> e[i];
       }
       sort(e , e + n);
       int sum = 0, cnt = 0;
       for(int i = 0;i < n; i++)
       {
           if(++cnt == e[i])
           {
               sum++;
               cnt = 0;
           }
       }
       cout<<sum<<'\n';

   }

    return 0;
}
