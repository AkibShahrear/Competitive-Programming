/*
number x
array a
longest sub array such that the sum of
its elements isn't divisible by x
a is sub array of b
*/
#include<bits/stdc++.h>
using namespace std;
int a[120012];
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n , x;
        cin >> n >> x;
        long long sum = 0,p = 0,j = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if(sum % x != 0)
        {
            cout<<n<<'\n';
        }
        else{
            int k = n , l = 0 , r = n;
            long long p = sum, j = sum,v = sum;
            for(int i = 0; i < n; i++)
            {
                p -= a[i];
                if(p % x != 0)
                {
                    l = n - (i + 1);
                    break;
                }
            }
          //  cout<<"l: "<<l<<'\n';
            int q = 0;
             for(int i = n - 1; i >= 0; i--)
            {
                j -= a[i];
                if(j % x != 0)
                {
                    q =  (i );
                    break;
                }
            }
           // cout << "q: "<<q<<'\n';

             for(int i = 0; i < n; i++)
            {
                v -= a[i];
                v -= a[n - i - 1];
                r -= 2;
                if(v % x != 0)
                {
                    break;
                }
            }
           // cout << "r: "<<r<<'\n';
            int y = max(l,max(q,r));
            if(y == 0)
            {
                cout << -1<<'\n';
            }
            else{
                cout<<y<<'\n';
            }
        }
    }

    return 0;
}
