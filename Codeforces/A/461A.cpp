/*
Appleman gives one group of n numbera
to the toast man

*/
#include<bits/stdc++.h>
using namespace std;
long long a[1000000];
int main()
{
    int n;
    cin >> n;
    long long sum = 0,initsum = 0;
    for(int i = 0; i < n ; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    if(n == 1)
    {
        cout <<a[0];
        return 0;
    }
    initsum = sum;
    sum += sum;
    sort(a , a + n);
    for(int i = 0; i < n - 2 ; i++)
    {
        initsum -= a[i];
     //   cout << initsum <<'\n';
        sum += initsum;
       // sum += initsum;
    }
    cout << sum <<'\n';
    return 0;
}
