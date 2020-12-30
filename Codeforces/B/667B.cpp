/*rods with int length
'i'th rod is a segment of length
li*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long a[n],sum = 0,mx = 0;;
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
       sum += a[i];
       if(mx < a[i])
          {
              mx = a[i];
          }

    }
    long long left = sum - mx;
    cout << (mx + 1) - left;
}
