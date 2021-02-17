/*
n badges
1 2 2 1 1 3 3 4 5 6
1 1 1 2 2 3 3 4 5 6
1 2 3 3 3 4 4
*/
#include<bits/stdc++.h>
using namespace std;
int a[4000];
int main()
{
    int n;
    cin>> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a,a + n);

    bool is = 0;

            int cnt = 0;
        for(int i = 0; i < n - 1; i++)
        {
            int l = abs(a[i + 1] - a[i]);
            if(a[i] >= a[i + 1])
            {
                cnt += (l + 1);
                a[i + 1] += (l + 1);
            }
        }

        cout<<cnt<<'\n';


    return 0;
}
