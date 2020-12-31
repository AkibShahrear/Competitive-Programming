/*
a --> n integer
smallest prefix
2
*/
#include<bits/stdc++.h>
using namespace std;

long long a[302001];
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
    bool is = 0;
    int cnt = 0;
       for(int i = n - 2; i >= 0; --i)
        {
            if(a[i] < a[i + 1]) is = 1;
            if(a[i] > a[i + 1] && is){
                cnt = i + 1;
                break;
            }
        }
        cout<<cnt<<'\n';
    }
}
