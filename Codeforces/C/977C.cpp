#include<bits/stdc++.h>
using namespace std;
long long a[2000100];
int main()
{
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
  //  cout<<a[k]<<'\n';
  long long cnt = 0;

    if(a[k - 1] == a[k])
    {
        cout<<-1;
        return 0;
    }
     if(k == 0)
     {
         if(a[0] == 1)
         {
             cout<<-1;
         }
         else{
            cout<<a[0] - 1;
         }
         return 0;
     }
     else{
        cout<<a[k - 1];
        return 0;
     }
}
