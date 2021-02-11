#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long a[n + 10],sum = 0;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for(int i = 1; i <= n; i++)
    {
     /*   if(i == 1)
        {
            sum += a[i] - 1;
        }*/
        if(i != n){
        sum += i * (a[i] - 1);
        }
    }
    sum += n * (a[n]);
    cout << sum;
}
