#include<bits/stdc++.h>
using namespace std;
long long a[1232996];
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long cnt = 0;
    sort(a , a + n);
    int j = 1;
    for(int i = 0; i < n; i++)
    {
        cnt += abs(j - a[i]);
        j++;
    }
    cout<<cnt<<'\n';
}
