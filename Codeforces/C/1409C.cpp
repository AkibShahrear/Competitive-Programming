/*
>>The array consists of n distinct int
>>two elements x and y where x < y
>>if sorted all adjacent elements will be same


*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,x,y;
        cin >> n >> x >> y;
        if(n == 2)
        {
            cout<<x<<" "<<y<<'\n';
        }
        else{
            int l = y - x;
            int k = n;

            while(n--)
            {
                if(l % n == 0)
                {
                    break;
                }
            }
            int s = x;
            int p = l/n;
            while(s <= y)
            {
                cout<<s<<" ";
                s += p;
                k--;
            }
            if(k == 0)
            {
                cout<<'\n';
            }
            else if(k != 0)
            {
                int r = x;
                while(r >= 1)
                {
                    r -= p;
                    if(r < 1)
                    {
                        break;
                    }
                    cout<<r<<" ";
                    k--;
                    if(k == 0)
                    {

                        break;
                    }
                }
                if(k != 0)
                {
                    int q = y;
                    while(k > 0)
                    {
                        q += p;
                        cout<<q<<" ";
                        k--;
                    }
                }
                cout<<'\n';
            }

        }
    }


    return 0;
}
