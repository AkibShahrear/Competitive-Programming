#include<bits/stdc++.h>
using namespace std;
char a[10][10];
int main()
{
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cin>>a[i][j];
        }
    }
    bool is = 0;
     for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if(a[i][j] == 'x' && a[i][j+1] == 'x' && a[i][j+2] == '.')
            {
                is=1;
                cout<<"YES";
                return 0;
            }
            if(a[i][j] == '.' && a[i][j+1] == 'x' && a[i][j+2] == 'x')
            {
                is=1;
                cout<<"YES";
                return 0;
            }
            if(a[i][j] == 'x' && a[i][j+1] == '.' && a[i][j+2] == 'x')
            {
                is=1;
                cout<<"YES";
                return 0;
            }
             if(a[i][j] == 'x' && a[i+1][j] == '.' && a[i+2][j] == 'x')
            {
                is=1;
                cout<<"YES";
                return 0;
            }
            if(a[i][j] == 'x' && a[i+1][j] == 'x' && a[i+2][j] == '.')
            {
                is=1;
                cout<<"YES";
                return 0;
            }
            if(a[i][j] == '.' && a[i+1][j] == 'x' && a[i+2][j] == 'x')
            {
                is=1;
                cout<<"YES";
                return 0;
            }
            if(a[i][j] == 'x' && a[i+1][j+1] == '.' && a[i+2][j+2] == 'x')
            {
                is=1;
                cout<<"YES";
                return 0;
            }
              if(a[i][j] == '.' && a[i+1][j+1] == 'x' && a[i+2][j+2] == 'x')
            {
                is=1;
                cout<<"YES";
                return 0;
            }
              if(a[i][j] == 'x' && a[i+1][j+1] == 'x' && a[i+2][j+2] == '.')
            {
                is=1;
                cout<<"YES";
                return 0;
            }
              if(a[i][j] == 'x' && a[i+1][j-1] == '.' && a[i+2][j-2] == 'x')
            {
                is=1;
                cout<<"YES";
                return 0;
            }
              if(a[i][j] == 'x' && a[i+1][j-1] == 'x' && a[i+2][j-2] == '.')
            {
                is=1;
                cout<<"YES";
                return 0;
            }
              if(a[i][j] == '.' && a[i+1][j-1] == 'x' && a[i+2][j-2] == 'x')
            {
                is=1;
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
}
