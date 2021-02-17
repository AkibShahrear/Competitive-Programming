/*
string s ==> n lower case letters
type all substrings
he could only use k letters

*/
#include<bits/stdc++.h>
using namespace std;
char a[100];
int main()
{
    int n , k;
    cin >> n >> k;
    string s;
    cin >> s;
    for(int i = 0; i < k; i++)
    {
        cin >> a[i];
    }
    long long sum = 0,l = 0;
    for(int i = 0; i <= n; i++)
    {

        int cnt = 0;
        for(int j = 0;j < k; j++)
        {
            if(s[i] == a[j])
            {
              //  cout<<"s[i]: "<<s[i]<<'\n';
                cnt = 1;
                break;
            }
        }
        if(cnt == 0)
        {
           // cout<<"l: "<<l<<'\n';
            sum += ((l*(l + 1))/2);
            l = 0;
        }
        else{
            l++;
        }


    }
    cout<<sum;
    return 0;
}
