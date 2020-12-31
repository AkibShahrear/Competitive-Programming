/*
int n k


*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
     long long a,b;
        cin >> a >> b;
        if(b % (a - 1) == 0 ){
    cout<<(a*(b/(a - 1))) - 1<<'\n';
        }
        else{
              cout<<(a*(b/(a - 1))) + (b % (a -1))<<'\n';
        }
          }


    return 0;
}
