/*
n tiles
1 / 2
1 1 1 2 1 1 1 2 1 1 1 2
1 1 1 1 1 1 1 1 1 2 2 2
1 2 2 2 2 2 2 2
*/
#include<bits/stdc++.h>
using namespace std;
int a[3000000];
int main()
{
    int n;
    cin >> n;
    int one = 0,two = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] == 1)
        {
            one++;
        }
        else{
            two++;
        }
    }
    if(n == 1)
    {
        cout<<a[0];
        return 0;
    }
    if(one & 1)
    {
        if(two == 0)
        {
            for(int i = 0; i < one; i++)
            {
                cout<<1<<" ";
            }
        }

        else if(one == 1)
        {
            cout<<2<<" "<< 1<<" ";

        for(int i = 0; i < two - 1; i++)
        {
            cout<<2<<" ";
        }
        }
        else{
        for(int i = 0; i < one; i++)
        {
            cout<<1<<" ";
        }
        for(int i = 0; i < two; i++)
        {
            cout<<2<<" ";
        }
        }

    }
    else{
          if(two == 0)
        {
            for(int i = 0; i < one; i++)
            {
                cout<<1<<" ";
            }
        }
        else if(one == 2)
        {
            cout<<2<<" ";
            cout<<1<<" ";
        for(int i = 0; i < two - 1; i++)
        {
            cout<<2<<" ";
        }


        cout<< 1;
        }
         else if(one == 0){

        for(int i = 0; i < two; i++)
        {
            cout<<2<<" ";
        }

        }
        else{
        for(int i = 0; i < one - 1; i++)
        {
            cout<<1<<" ";
        }
        for(int i = 0; i < two; i++)
        {
            cout<<2<<" ";
        }
        cout<< 1;
        }
    }


    return 0;
}
