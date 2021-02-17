/*
n subjects
i th ---> ci chapters
initial per chapter learning power
of a subject is x hours
next subject 1--
*/
#include<bits/stdc++.h>
using namespace std;
int a[1000000];
int main()
{
    long long n,x;
    cin >> n >> x;
    for(int i = 0;i < n; i++)
    {
        cin >> a[i];
    }
    sort(a , a + n);
    long long ans = 0;
    for(int i = 0; i < n; i++)
    {
        ans += a[i] * x;
        x--;
        if(x <= 1)
        {
            x = 1;
        }
    }
    cout<< ans;
    return 0;
}
