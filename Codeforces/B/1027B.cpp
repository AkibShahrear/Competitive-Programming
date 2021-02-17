#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n , q;
    cin >> n >> q;
    long long p , r;
    for(int i = 0; i < q; i++)
    {
        long long x , y ,sum = 0;
        cin >> x >> y;
        x--;y--;
        if((x + y)%2 == 0)
        {
         sum += (x / 2)*n;
         if(x % 2 == 0)
         {

         }
         else{
            sum += (n + 1)/2;
         }
         sum += y/2;
        }
        else{
           sum += (n * n + 1)/2;
           sum += (x/2)*n;
            if(x%2 == 0){

            }
            else{
                sum += n/2;
            }
            sum += y/2;

        }
        cout<<sum + 1<<'\n';
    }

    return 0;
}
