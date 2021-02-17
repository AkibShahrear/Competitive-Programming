#include<bits/stdc++.h>
using namespace std;
int a[2000];
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n ; i++)
    {
        cin >> a[i];
    }
    int p = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] <= p)
        {
            a[i] = -1;
            p++;
        }
    }
    int cnt  = 0;
    for(int j = 0; j < n; j++){
    {

     if(j%2 == 0){
     bool is = 0 , ok = 0;
     for(int i = n - 1; i >= 0; i--)
     {
         if(a[i] != -1)
         {
             ok = 1;
             if(a[i] <= p)
             {
                 is = 1;
                 a[i] = -1;
                 p++;
             }
         }
     }
    if(is)
    {
        cnt++;
    }
    if(!ok)
    {
        cout<<cnt;
        return 0;
    }
     }
     else{
        bool is = 0 , ok = 0;
     for(int i = 0; i < n; i++)
     {
         if(a[i] != -1)
         {
             ok = 1;
             if(a[i] <= p)
             {
                 is = 1;
                 a[i] = -1;
                 p++;
             }
         }
     }
    if(is)
    {
        cnt++;
    }
    if(!ok)
    {
        cout<<cnt;
        return 0;
    }
     }

    }
    }

    return 0;
}
