/*Chris play with dominoes and make a
"domino show"
n dominoes in a line
placing each piece vertically upright
push-->right or left
somewhere between every two dominoes pushed in
the same direction there is atleast
one domino pushed in the opposite
direction
each second falling to the left pushes
the adjacent domino to left
right ---> right
input ==> init direction
output standing
intput===> n
         string
output==>*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0, i = 0;
   for(int i = 0;i < n; i++)
   {
       int j = i;
       while(s[i] == 'L')
       {
           j--;
           if(j<0)
           {
               break;
           }
           if(j >= 0)
           {
               if(s[j] == 'L')
               {
                   break;
               }
               else if(s[j] == 'X')
               {

                 //  s[j] = '.';
                   break;
               }
               else if(s[j] == 'R')
               {
                   break;
               }
               else{
               s[j] = 'X';
               }
           }
       }
         while(s[i] == 'R')
       {
           j++;
           if(j>(n-1))
           {
               break;
           }
           if(j >= 0)
           {
               if(s[j] == 'X')
               {
                 //  s[j] = '.';
                   i = j;
                   break;
               }
               else if(s[j] == 'R')
               {
                   i = j;
                   break;
               }
               else if(s[j] == 'L')
               {
                   i = j;
                   break;
               }
               else{
               s[j] = 'X';
               }
           }
       }
   }

    for(int i = 0; i < n; i++)
    {
        if(s[i] == '.')
        {
            cnt++;
        }
        if(s[i] == 'R')
        {
            for(int j = i + 1;j < n; j++)
            {
                if(s[j] == 'L')
                {
                    if((j - i + 1)%2 != 0)
                    {
                        cnt++;
                    }
                    break;

                }
            }
        }
       // cout<<s[i];
    }
    cout<<cnt;
}
