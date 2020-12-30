#include<bits/stdc++.h>
using namespace std;
int p[11000];
int main()
{
    int n;
    cin>>n;
   n/=2;
    for(int i=1;i<=n;i++)
    {

        cin>>p[i];

    }
    sort(p+1,p+n+1);
    int cnt=0,pnt=0;
    for(int i=1;i<=n;i++)
    {
        cnt += abs(2*i-p[i]);
        pnt += abs((2*i-1)-p[i]);
    }
   cout<<min(cnt,pnt);

}
