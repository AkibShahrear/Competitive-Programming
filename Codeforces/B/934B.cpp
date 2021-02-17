#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long k;
    cin >> k;
    if(k > 36)
    {
        cout<<-1;
    }
    else{
        if(k % 2 == 0)
        {
            for(int i = 0; i < (k/2); i++)
            {
                cout<<8;
            }
        }
        else{
             for(int i = 0; i < (k/2); i++)
            {
                cout<<8;
            }
            cout<<9;
        }
    }
    return 0;
}
