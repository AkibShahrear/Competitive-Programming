#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
int main()
{
    string a, b;
    cin >> a >> b;
    int four1 = 0, seven1 = 0;
    for(int i = 0; i < a.length(); i++)
    {
        if(a[i] == '4')
        {
            four1++;
        }
        else if(a[i] == '7')
        {
            seven1++;
        }
    }
     int four2 = 0, seven2 = 0;
    for(int i = 0; i < b.length(); i++)
    {
        if(b[i] == '4')
        {
            four2++;
        }
        else if(b[i] == '7')
        {
            seven2++;
        }
    }
 //   if(seven1 != seven2)
   // {
   //cout<<"four1: "<<four1<<" four2: "<<four2<<'\n';
        int cnt  = 0;
        for(int i = 0; i < a.length(); i++)
        {
            if(a[i] != b[i])
            {

                if(b[i] == '4')
                {


                    if(four1 < four2)
                    {

                 //        cout<<"a[i]: "<<a[i]<<" b[i]: "<<b[i]<<'\n';
                        cnt++;
                        four1++;
                   //     cout<<"cnt: "<<cnt<<" four1: "<<four1<<'\n';
                        a[i] = '4';
                    }
                }
                else if(b[i] == '7')
                {
                    if(seven1 < seven2)
                    {
                        cnt++;
                        seven1++;
                        a[i] = '7';
                    }
                }
            }
        }
        int p = 0;
        for(int i = 0; i < a.length(); i++)
        {
            if(a[i] != b[i])
            {
                p++;
            }
        }
        p/=2;
        cout<< cnt + p;
 //   }
}
