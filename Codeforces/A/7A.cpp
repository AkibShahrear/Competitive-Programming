/*there should be chosen a horizontal
or vertical line of 8 squares paint black
init whole chessboard is white

minimum amount of strokes
input:==> 8 line 8 char (w or b)*/
#include<bits/stdc++.h>
using namespace std;
char a[10][10];
string s[8];
int main()
{
    for(int i = 0; i < 8; i++)
    {

            cin>>s[i];

    }
    int cnt = 8;
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
        if(s[i][j] == 'W')
        {
            cnt = 0;
            for( int k = 0; k < 8; k++)
            {
                if(s[k][j] == 'B')
                {
                    ++cnt;
                }
                if(s[i][k] == 'B')
                {
                    ++cnt;
                }
            }
            cout << cnt <<endl;
            return 0;
        }

        }
    }
    cout<<cnt;
    return 0;
}
