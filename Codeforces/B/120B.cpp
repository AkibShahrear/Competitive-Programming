/*
each question is positioned in sepe
rate sector
ai == 0 has been asked
ai == 1 has not been asked
0 1 0 1 0
1 2 3 4 5
*/
#include<bits/stdc++.h>
using namespace std;
int a[2100];
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n , k;
    cin >> n >> k;
    int l = 2011;
    for(int i = 1; i <= n; i++)
    {
        cin>>a[i];

    }
    if(a[k] == 1)
    {
        cout<<k;
    }
    else{
       int i = k;
       while(a[i] == 0)
       {
           i = i % n;
           i++;
       }
       cout<<i;
    }


    return 0;
}
